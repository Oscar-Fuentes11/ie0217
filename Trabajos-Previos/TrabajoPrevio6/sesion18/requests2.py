import requests

url = "https://www.google.com"

reponse = requests.get(url)

print(reponse.text)