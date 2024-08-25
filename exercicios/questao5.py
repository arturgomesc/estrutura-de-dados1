import random 

lista_final = []

def generate_random_numbers():
    """
    Gera 5 números aleatórios entre 1 e 100.

    Returns:
        List[int]: Uma lista de 5 números aleatórios.
    """
    return [random.randint(1, 100) for _ in range(5)]

def calcular_elementos_vezes_indice(v):
    for i, x in enumerate(v):
        lista_final.append(i * x)

    return lista_final

lista1 = generate_random_numbers()
print(lista1)

r = calcular_elementos_vezes_indice(lista1)
print(r)