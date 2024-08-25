import random 


def generate_random_numbers():
    """
    Gera 5 números aleatórios entre 1 e 100.

    Returns:
        List[int]: Uma lista de 5 números aleatórios.
    """
    return [random.randint(1, 100) for _ in range(5)]

def calcular_produto_vetores(v, w):
    """
    Calcula o produto dos termos correspondentes de dois vetores e armazena o resultado em um terceiro vetor.

    Args:
        v: O primeiro vetor.
        w: O segundo vetor.

    Returns:
        Um vetor contendo o produto dos termos correspondentes de v e w.

    Raises:
        ValueError: Se os vetores tiverem tamanhos diferentes.
    """

    if len(v) != len(w):
        raise ValueError("Os vetores devem ter o mesmo tamanho para calcular o produto termo a termo.")

    y = [v[i] * w[i] for i in range(len(v))]
    return y

# Exemplo de uso
v = generate_random_numbers()
w = generate_random_numbers()

try:
    y = calcular_produto_vetores(v, w)
    print("Produto dos termos dos vetores:")
    for i in range(len(y)):
        print(f"y[{i}] = {y[i]}")
except ValueError as e:
    print(f"Erro: {e}")
