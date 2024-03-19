﻿IF EXISTS (SELECT name FROM sys.databases WHERE name = 'AdapostAnimale')
BEGIN
    -- Schimbă contextul în baza de date master și închide conexiunile active
    USE master;
    ALTER DATABASE AdapostAnimale SET SINGLE_USER WITH ROLLBACK IMMEDIATE;

    -- Șterge baza de date existentă
    DROP DATABASE AdapostAnimale;
END;


-- Creează baza de date
IF NOT EXISTS(SELECT * FROM sys.databases WHERE name = 'AdapostAnimale')
BEGIN
   CREATE DATABASE [AdapostAnimale]
END
   GO
      USE [AdapostAnimale]
   GO


-- Creează Hrana dacă nu există deja
DROP TABLE IF EXISTS Hrane
IF OBJECT_ID('Hrane') IS NULL
    CREATE TABLE Hrane (
        IdHrana INT IDENTITY(1, 1) NOT NULL,
        TipHrana VARCHAR(50) NOT NULL,
        Pret FLOAT NOT NULL
    );
ALTER TABLE Hrane
ADD CONSTRAINT PK_hrana PRIMARY KEY (IdHrana);
--Introdcuerea datelor de proba
INSERT INTO Hrane (TipHrana, Pret) VALUES 
    ('Hrana pentru broaste testoase', 21.99),
    ('Hrana pentru iepuri', 18.50);

-- Stergea datelor din tabel dar tabelul ramane
TRUNCATE TABLE Hrane;

-- Creează Donatori dacă nu există deja
DROP TABLE IF EXISTS Donatori
IF OBJECT_ID('Donatori') IS NULL
    CREATE TABLE Donatori (
        IdDonator DECIMAL(6,0) IDENTITY(1, 1) NOT NULL,
		IdnpDonator DECIMAL(13,0) NOT NULL UNIQUE,
        Nume VARCHAR(50) NOT NULL,
        Prenume VARCHAR(50) NOT NULL,
        Adresa VARCHAR(100) NOT NULL,
		Oras VARCHAR(50) NOT NULL,
        Email VARCHAR(50) CHECK (Email LIKE '%@%') UNIQUE,
        Telefon VARCHAR(12) NOT NULL CHECK (Telefon LIKE '+373[0-9]%') UNIQUE,
        Gen CHAR(1) NOT NULL CHECK (gen IN ('M', 'F')),
        DataNastere DATE NOT NULL,
		CONSTRAINT Pk_IdDonator PRIMARY KEY(IdDonator, IdnpDonator)	
    );

-- Adaugare o constrangere pentru Oras 
ALTER TABLE Donatori
ADD CONSTRAINT DF_Donatori_ORAS DEFAULT 'Chisinau' FOR Oras;

--Adauga tabelul Animale daca nu exista deja
DROP TABLE IF EXISTS Animale
IF OBJECT_ID('Animale') IS NULL
    CREATE TABLE Animale (
        IdAnimal INT IDENTITY(1, 1) NOT NULL PRIMARY KEY,
        NumeAnimal VARCHAR(100) NOT NULL,
        TipAnimal VARCHAR(50) NOT NULL,
        Greutate FLOAT NOT NULL,
        Varsta INT NOT NULL,
        Gen CHAR(1) NOT NULL CHECK (gen IN ('M', 'F')),
        IdHrana INT NOT NULL,
        IdDonator DECIMAL(6,0) NOT NULL,
		IdnpDonator DECIMAL(13,0) NOT NULL,
        CONSTRAINT FK_hrana FOREIGN KEY (IdHrana) REFERENCES Hrane (IdHrana) ON DELETE CASCADE ON UPDATE CASCADE,
        CONSTRAINT FK_Donator FOREIGN KEY (IdDonator,IdnpDonator) REFERENCES Donatori (IdDonator,IdnpDonator) ON DELETE CASCADE ON UPDATE CASCADE
    );
-- Creează tabelul Veterinar dacă nu există deja
DROP TABLE IF EXISTS Veterinar
IF OBJECT_ID('Veterinar') IS NULL
    CREATE TABLE Veterinar (
        IdVeterinar INT IDENTITY(1, 1) NOT NULL PRIMARY KEY,
		IdnpVeterinar CHAR(13) NOT NULL,
        Nume VARCHAR(50) NOT NULL,
        Prenume VARCHAR(50) NOT NULL,
        Adresa VARCHAR(255) NOT NULL,
		Oras VARCHAR(50) NOT NULL DEFAULT 'Chisinau',
        Email VARCHAR(50) NOT NULL CHECK (Email LIKE '%@%') UNIQUE,
        Telefon VARCHAR(20) NOT NULL CHECK (Telefon LIKE '+373[0-9]%') UNIQUE
    );
-- Comanda pentru a elimina coloana Idnp_Vetrinar
ALTER TABLE Veterinar
DROP COLUMN IdnpVeterinar;

-- Creează Consultati dacă nu există deja
DROP TABLE IF EXISTS Consultatii
IF OBJECT_ID('Consultatii') IS NULL
    CREATE TABLE Consultatii (
        IdConsultatie INT IDENTITY(1, 1) NOT NULL PRIMARY KEY,
        IdAnimal INT NOT NULL REFERENCES animale (IdAnimal),
        DataConsultatiei DATE NOT NULL,
        Diagnostic VARCHAR(255) NOT NULL,
        IdVeterinar INT NOT NULL,
        CONSTRAINT FK_Consulatii FOREIGN KEY (IdVeterinar) REFERENCES Veterinar (IdVeterinar) ON DELETE CASCADE ON UPDATE CASCADE
    );
-- Creează Adoptanti dacă nu există deja
DROP TABLE IF EXISTS Adoptanti
IF OBJECT_ID('Adoptanti') IS NULL
    CREATE TABLE Adoptanti (
        IdAdoptant DECIMAL(6,0) IDENTITY(1, 1) NOT NULL,
        IdnpAdoptant DECIMAL(13,0) NOT NULL,
        Nume VARCHAR(50) NOT NULL,
        Prenume VARCHAR(50) NOT NULL,
        Adresa VARCHAR(100) NOT NULL,
		Oras VARCHAR(50) NOT NULL DEFAULT 'Chisinau', 
        Email VARCHAR(50) NOT NULL CHECK (Email LIKE '%@%')UNIQUE,
        Telefon VARCHAR(12) NOT NULL CHECK (Telefon LIKE '+373[0-9]%')UNIQUE,
		DataNastere DATE NOT NULL,
		Varsta AS DATEDIFF(YEAR, DataNastere, GETDATE()),
		CONSTRAINT Pk_IdAdoptanti PRIMARY KEY(IdAdoptant,IdnpAdoptant),
		CONSTRAINT UC_adoptant UNIQUE (IdnpAdoptant)
    );

ALTER TABLE Adoptanti
ALTER COLUMN Adresa VARCHAR(80);

-- Creare tabel Adoptii daca nu exista
DROP TABLE IF EXISTS Adoptii
IF OBJECT_ID('Adoptii') IS NULL
    CREATE TABLE Adoptii (
        IdAdopti INT IDENTITY(1, 1) NOT NULL,
        IdAnimal INT NOT NULL ,
        IdAdoptant DECIMAL(6,0) NOT NULL,
		IdnpAdoptant DECIMAL(13,0) NOT NULL,
		CONSTRAINT Pk_Id_adopti PRIMARY KEY(IdAdopti),
		CONSTRAINT FK_Animal FOREIGN KEY (IdAnimal) REFERENCES Animale (IdAnimal) ON DELETE CASCADE ON UPDATE CASCADE,
        CONSTRAINT FK_Adoptant FOREIGN KEY (IdAdoptant,IdnpAdoptant) REFERENCES Adoptanti (IdAdoptant,IdnpAdoptant) ON DELETE CASCADE ON UPDATE CASCADE
    );
-- Adaugare 15 valori in tabela Hrana
INSERT INTO Hrane (TipHrana, Pret) VALUES 
    ('Hrana pentru broaste testoase', 25.98),
    ('Hrana pentru iepuri', 18.50),
    ('Hrana uscata pentru ponei', 26.49),
    ('Hrana pentru serpi', 15.49),
    ('Hrana uscata pentru caini', 33.25),
    ('Hrana umeda pentru pesti', 19.99),
    ('Hrana uscata pentru cai', 28.75),
    ('Hrana pentru vrabii', 14.49),
    ('Hrana umeda pentru hamsteri', 10.99),
    ('Hrana pentru pesti exotici', 12.99),
    ('Biscuiti pentru pisici', 13.49),
    ('Hrana pentru reptile', 16.75),
    ('Hrana pentru gaini', 18.99),
    ('Hrana uscata pentru papagali', 15.99),
    ('Hrana uscata pentru porcusori de Guinea', 22.25);

-- Adaugare 15 valori în tabela Donatori
INSERT INTO Donatori (IdnpDonator, Nume, Prenume, Adresa, Oras, Email, Telefon, Gen, DataNastere)
VALUES 
    ('1234567890123', 'Popescu', 'Ion', 'Str. Primaverii, Nr. 1', 'Calarasi', 'popescu1.ion@example.com', '+37361212345', 'M', '1980-05-15'),
    ('9876543210987', 'Ionescu', 'Ana', 'Str. Florilor, Nr. 10','Straseni','ionesc2u.ana@example.com', '+37360451278', 'F', '1995-08-22'),
    ('1111222533344', 'Vasilescu', 'Elena', 'Str. Republicii, Nr. 7', 'Ialoveni', 'vasilescu.elena@example.com', '+3736782234', 'F', '1982-02-10'),
    ('5555646677788', 'Marinescu', 'Mihai', 'Str. Victoriei, Nr. 20', 'Balti', 'marinescu.mihai@example.com', '+37364567800', 'M', '1990-07-18'),
    ('9999888377666', 'Radulescu', 'Cristina', 'Str. Independentei, Nr. 15', 'Cahul', 'radulescu.cristina@example.com', '+37362127454', 'F', '1985-11-30'),
    ('1212121512121', 'Iancu', 'Alexandru', 'Str. Cuza Voda, Nr. 7', 'Ungheni', 'iancu.alex@example.com', '+37367738899', 'M', '1975-09-05'),
    ('3434343434943', 'Gheorghe', 'Maria', 'Str. Stefan cel Mare, Nr. 12', 'Soroca', 'gheorghe.maria@example.com', '+37367544333', 'F', '1998-04-25'),
    ('7676767676767', 'Dumitru', 'Mihai', 'Str. Republicii, Nr. 3', 'Chisinau', 'dumitru.mihai@example.com', '+37360234567', 'M', '1988-12-15'),
    ('1234567823123', 'Popov', 'Svetlana', 'Str. Rozelor, Nr. 15', 'Chisinau', 'popov.svetlana@example.com', '+37360987154', 'F', '1998-03-21'),
    ('9876233210987', 'Ivanov', 'Dmitrii', 'Str. Mihai Eminescu, Nr. 8', 'Chisinau', 'ivanov.dmitrii@example.com', '+37361789456', 'M', '1982-07-19'),
    ('1111222233355', 'Stoica', 'Elena', 'Str. Traian, Nr. 25', 'Chisinau', 'stoica.elena@example.com', '+37360121098', 'F', '1999-11-12'),
    ('5555666677799', 'Sorin', 'Iuliana', 'Str. Alba Iulia, Nr. 17', 'Chisinau', 'sorin.iuliana@example.com', '+37360178901', 'M', '1987-06-30'),
    ('9999888777677', 'Nicolae', 'Vladimir', 'Str. Calea Iesilor, Nr. 13', 'Chisinau', 'nicolae.vladimir@example.com', '+37360451789', 'M', '1993-09-08'),
    ('1212121212222', 'Ifrim', 'Roxana', 'Str. Dacia, Nr. 4', 'Chisinau', 'ifrim.roxana@example.com', '+37360123416', 'F', '1985-01-14'),
    ('3434343434433', 'Munteanu', 'Adrian', 'Str. Mitropolit Dosoftei, Nr. 11', 'Chisinau', 'munteanu.adrian@example.com', '+37361987654', 'M', '1978-04-07');

-- Adaugare 15 valori în tabela Animale
INSERT INTO Animale (NumeAnimal, TipAnimal, Greutate, Varsta, Gen, IdHrana, IdDonator,IdnpDonator)
VALUES 
    ('Rex', 'Broasca Testoasa', 15.5, 3, 'M', 1, 1,'1234567890123'),
    ('Whiskers', 'Iepure', 5.2, 2, 'F', 2, 1,'1234567890123'),
    ('Buddy', 'Ponel', 220.3, 4, 'M', 3, 2, '9876543210987'),
    ('Fluffy', 'Sarpe', 3.7, 1, 'F', 4, 2, '9876543210987'),
    ('Max', 'Caine', 8.9, 2, 'M', 5, 2, '9876543210987'),
    ('Luna', 'Peste', 0.25, 3, 'F', 6, 3, '1111222533344'),
    ('Rocky', 'Cal', 340.2, 5, 'M', 7, 3, '1111222533344'),
    ('Misty', 'Vrabie', 0.8, 2, 'F', 8, 3, '1111222533344'),
    ('Charlie', 'Hamster', 0.7, 3, 'M', 9, 4, '5555646677788'),
    ('Lucy', 'Pesti exotici', 0.30, 4, 'F', 10, 4, '5555646677788'),
    ('Teddy', 'Pisica', 2.1, 1, 'M', 11, 4, '5555646677788'),
    ('Oreo', 'Reptila', 2.3, 2, 'F', 12, 5, '9999888377666'),
    ('Coco', 'Gaina', 2.7, 3, 'M', 13, 5, '9999888377666'),
    ('Bella', 'Papagal', 3.4, 1, 'F', 14, 5, '9999888377666'),
    ('Simba', 'Porcusor de guinea', 1.2, 4, 'M', 15, 5, '9999888377666');

-- Adaugare 15 valori în tabela Veterinar
INSERT INTO Veterinar (Nume, Prenume, Adresa, Oras, Email, Telefon)
VALUES 
    ('Ivanov', 'Dmitrii', 'Str. Mihai Eminescu, Nr. 8', 'Chisinau', 'ivanov.dmitrii_vet@example.com', '+37361789456'),
    ('Popescu', 'Ion', 'Str. Independentei, Nr. 15', 'Cahul', 'popescu.ion_vet@example.com', '+37362127454'),
    ('Vasilescu', 'Elena', 'Str. Republicii, Nr. 7', 'Ialoveni', 'vasilescu.elena_vet@example.com', '+37367821234'),
    ('Marinescu', 'Mihai', 'Str. Victoriei, Nr. 20', 'Balti', 'marinescu.mihai_vet@example.com', '+37364567840'),
    ('Radulescu', 'Cristina', 'Str. Cuza Voda, Nr. 7', 'Ungheni', 'radulescu.cristina_vet@example.com', '+37367738899'),
    ('Iancu', 'Alexandru', 'Str. Stefan cel Mare, Nr. 12', 'Soroca', 'iancu.alex_vet@example.com', '+37366754433'),
    ( 'Gheorghe', 'Maria', 'Str. Republicii, Nr. 3', 'Chisinau', 'gheorghe.maria_vet@example.com', '+37360234567'),
    ('Dumitru', 'Mihai', 'Str. Rozelor, Nr. 15', 'Chisinau', 'dumitru.mihai_vet@example.com', '+37360987154'),
    ('Popov', 'Svetlana', 'Str. Mihai Eminescu, Nr. 8', 'Chisinau', 'popov.svetlana_vet@example.com', '+37361789426'),
    ('Ionescu', 'Ana', 'Str. Traian, Nr. 25', 'Chisinau', 'ionescu.ana_vet@example.com', '+37360121028'),
    ('Stoica', 'Elena', 'Str. Alba Iulia, Nr. 17', 'Chisinau', 'stoica.elena_vet@example.com', '+37362178901'),
    ('Sorin', 'Iuliana', 'Str. Calea Iesilor, Nr. 13', 'Chisinau', 'sorin.iuliana_vet@example.com', '+37360251789'),
    ('Nicolae', 'Vladimir', 'Str. Dacia, Nr. 4', 'Chisinau', 'nicolae.vladimir_vet@example.com', '+37360123216'),
    ('Ifrimos', 'Dima', 'Str. Mitropolit Dosoftei IVAN, Nr. 01', 'Chisinau', 'ifrimos.dima_vet@example.com', '+37321984554'),
	('Ifrim', 'Roxana', 'Str. Mitropolit Dosoftei, Nr. 11', 'Chisinau', 'ifrim.roxana_vet@example.com', '+37321987654');

-- Adaugare 15 valori în tabela Consultatii
INSERT INTO Consultatii (IdAnimal, DataConsultatiei, Diagnostic, IdVeterinar)
VALUES 
    (1, '2023-01-05', 'Raceli', 1),
    (2, '2023-02-10', 'Febra', 2),
    (3, '2023-03-15', 'Indigestie', 3),
    (4, '2023-04-20', 'Fractura', 4),
    (5, '2023-05-25', 'Gastrita', 5),
    (6, '2023-06-30', 'Alergie', 6),
    (7, '2023-07-05', 'Paraziti intestinali', 7),
    (8, '2023-08-10', 'Otita', 8),
    (9, '2023-09-15', 'Raceala', 9),
    (10, '2023-10-20', 'Deshidratare', 10),
    (11, '2023-11-25', 'Colici', 11),
    (12, '2023-12-30', 'Diaree', 12),
    (13, '2024-01-05', 'Probleme dentare', 13),
    (14, '2024-02-10', 'Afectiuni cardiace', 14),
    (6, '2024-03-15', 'Anemie', 7);

-- Adaugare 15 valori în tabela Adoptanti
INSERT INTO Adoptanti (IdnpAdoptant, Nume, Prenume, Adresa, Oras, Email, Telefon,DataNastere)
VALUES 
    ('1234567890120', 'Popescu', 'Ana', 'Str. Libertatii, Nr. 5', 'Chisinau', 'popescu.ana@example.com', '+37360123456','1990-03-20'),
    ('9876543210981', 'Ionescu', 'Mihai', 'Str. Unirii, Nr. 12', 'Chisinau', 'ionescu.mihai@example.com', '+37360234567','1985-05-10'),
    ('1111222533342', 'Vasilescu', 'Elena', 'Str. Stefan cel Mare, Nr. 8', 'Chisinau', 'vasilescu.elena@example.com', '+37360345678','1988-09-15'),
    ('5555646677783', 'Marinescu', 'Mihai', 'Str. Victoriei, Nr. 15', 'Chisinau', 'marinescu.mihai@example.com', '+37360456789','1975-12-05'),
    ('9999888377664', 'Radulescu', 'Cristina', 'Str. Independentei, Nr. 10', 'Chisinau', 'radulescu.cristina@example.com', '+37360567890','1995-08-22'),
    ('1212121512125', 'Iancu', 'Alexandru', 'Str. Cuza Voda, Nr. 7', 'Chisinau', 'iancu.alex@example.com', '+37360678901', '1982-02-10'),
    ('3434343434946', 'Gheorghe', 'Maria', 'Str. Stefan cel Mare, Nr. 12', 'Chisinau', 'gheorghe.maria@example.com', '+37360789012','1990-07-18'),
    ('7676767676767', 'Dumitru', 'Mihai', 'Str. Republicii, Nr. 3', 'Chisinau', 'dumitru.mihai@example.com', '+37360890123','1985-11-30'),
    ('1234567823128', 'Popov', 'Svetlana', 'Str. Rozelor, Nr. 15', 'Chisinau', 'popov.svetlana@example.com', '+37360901234','1998-03-21'),
    ('9876233210999', 'Ivanov', 'Dmitrii', 'Str. Mihai Eminescu, Nr. 8', 'Chisinau', 'ivanov.dmitrii@example.com', '+37361012345', '1982-07-19'),
    ('1111222233350', 'Stoica', 'Elena', 'Str. Traian, Nr. 25', 'Chisinau', 'stoica.elena@example.com', '+37361123456', '1999-11-12'),
    ('5555666677791', 'Sorin', 'Iuliana', 'Str. Alba Iulia, Nr. 17', 'Chisinau', 'sorin.iuliana@example.com', '+37361234567','1987-06-30'),
    ('9999888777672', 'Nicolae', 'Vladimir', 'Str. Calea Iesilor, Nr. 13', 'Chisinau', 'nicolae.vladimir@example.com', '+37361345678','1993-09-08'),
    ('1212121212223', 'Ifrim', 'Roxana', 'Str. Dacia, Nr. 4', 'Chisinau', 'ifrim.roxana@example.com', '+37361456789','1985-01-14'),
    ('3434343434434', 'Munteanu', 'Adrian', 'Str. Mitropolit Dosoftei, Nr. 11', 'Chisinau', 'munteanu.adrian@example.com', '+37361567890','1978-04-07');

-- Adaugare 15 valori în tabela Adoptii
INSERT INTO Adoptii (IdAnimal, IdAdoptant, IdnpAdoptant)
VALUES 
    (1, 1, '1234567890120'),
    (2, 2, '9876543210981'),
    (3, 3, '1111222533342'),
    (4, 4, '5555646677783'),
    (5, 5, '9999888377664'),
    (6, 6, '1212121512125'),
    (7, 7, '3434343434946'),
    (8, 8, '7676767676767'),
    (9, 9, '1234567823128'),
    (10, 10, '9876233210999'),
    (11, 11, '1111222233350'),
    (12, 12, '5555666677791'),
    (13, 13, '9999888777672'),
    (14, 14, '1212121212223'),
    (15, 15, '3434343434434');

