import PyPDF2
import pyttsx3

path = open('sample.pdf', 'rb')
pdfRead = PyPDF2.PdfFileReader(path)

ReadFromPage = pdfRead.getPage(0)
text = ReadFromPage.extractText()
speak = pyttsx3.init()
speak.say(text)
speak.runAndWait()