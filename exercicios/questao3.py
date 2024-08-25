import random 

# Make a function to generate random numbers beetwen 1 and 100 20 times and return a list with those numbers


def generate_random_numbers():
    """
    Gera 20 números aleatórios entre 1 e 100.

    Returns:
        List[int]: Uma lista de 20 números aleatórios.
    """
    return [random.randint(1, 100) for _ in range(20)]

def calcular_variancia(valores):
  """
  Calcula a variância de um conjunto de valores.

  Args:
      valores: Uma lista de números reais.

  Returns:
      A variância dos valores.
  """

  media = sum(valores) / len(valores)
  soma_dos_quadrados = sum((x - media) ** 2 for x in valores)
  variancia = soma_dos_quadrados / (len(valores) - 1)  # Variância amostral
  return variancia

# Exemplo de uso
valores = generate_random_numbers()

variancia = calcular_variancia(valores)
print(f"A variância dos valores é: {variancia:.2f}")


