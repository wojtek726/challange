import os


for file in os.listdir(os.getcwd()):
    if file.endswith(".txt"):
        tekst = file
        pathold = os.getcwd()+"/"+tekst
        print pathold
        tekst = tekst.replace("txt","srt")
        pathnew = os.getcwd()+"/"+tekst
        print pathnew
        os.renames(pathold,pathnew)
        print("\n")
        