import pyttsx3
import wikipedia

bhai=pyttsx3.init()
voices=bhai.getProperty('voice')
bhai.setProperty('voice',voices)

In=input("Search wikipedia/google: ")
result=wikipedia.summary(In,sentences=1000000000)
print(result)
bhai.say(result)
bhai.runAndWait()