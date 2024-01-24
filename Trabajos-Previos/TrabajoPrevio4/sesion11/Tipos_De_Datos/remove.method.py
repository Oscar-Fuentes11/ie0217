languages = ['Python', 'Swift', 'C++', 'C', 'C', 'Java', 'Rust', 'R']

#Deleting the second item
del languages[1]
print(languages) #[todos menos "Swift"]

#Deleting the last item
del languages[-1]
print(languages) #se elimina el R

#delete first two items
del languages[0 : 2] #['C', 'Java', 'Rust']
print(languages)

#remove 'python' from the list
languages.remove ('Python')

print (languages) # todos menos python