import re

def CountRepetitionWords(x):
    x = re.sub(r'[\,\.\!\¡\?\¿\-\:\;\(\)]', '', x)

    SeparateWords = x.lower().split()

    words = {}

    for word in SeparateWords:
        if word in words:
            words[word] += 1
        else:
            words[word] = 1

    print(words)

if __name__ == '__main__':

    text = 'hola como, ESTAN, HOLA. como Estan EsTan'

    CountRepetitionWords(text)

    print("*********************")

    text2 = 'hola que tal, tal que bienvenidos a BettaTech. Si os esta gustando este video, suscribiros y darle a la campanita para ver los nuevos videos que vaya subiendo!'

    CountRepetitionWords(text2)
