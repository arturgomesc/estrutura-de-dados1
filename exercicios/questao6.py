import random 


def generate_random_numbers():
    """
    Gera 5 números aleatórios entre 1 e 100.

    Returns:
        List[int]: Uma lista de 5 números aleatórios.
    """
    return [random.randint(1, 100) for _ in range(5)]

def media(n, v):
    """
    Calcula a média de um conjunto de números reais.

    Args:
        n: O número de elementos no vetor v.
        v: O vetor contendo os números reais.

    Returns:
        A média dos números no vetor v.
    """
    soma = sum(v)
    return soma / n

def variancia(n, v, m):
    """
    Calcula a variância de um conjunto de números reais.

    Args:
        n: O número de elementos no vetor v.
        v: O vetor contendo os números reais.
        m: A média dos números no vetor v.

    Returns:
        A variância dos números no vetor v.
    """
    soma_dos_quadrados = sum((x - m) ** 2 for x in v)
    return soma_dos_quadrados / (n - 1)

numeros = generate_random_numbers()
n = len(numeros)

media_calculada = media(n, numeros)
variancia_calculada = variancia(n, numeros, media_calculada)

print(f"Média: {media_calculada:.2f}")
print(f"Variância: {variancia_calculada:.2f}")
