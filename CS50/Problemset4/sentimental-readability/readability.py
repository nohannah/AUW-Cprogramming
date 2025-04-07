
from cs50 import get_string


def count_letters(text):
    count = 0
    for char in text:
        if char.isalpha():
            count += 1
    return count


def count_word(text):
    word = [word for word in text.split() if word]
    return len(word)


def count_sentence(text):
    count = 0
    for char in text:
        if char in {'.', '!', '?'}:
            count += 1
    return count


def main():
    text = get_string("Text: ")
    letters = count_letters(text)
    words = count_word(text)
    sentences = count_sentence(text)

    if words == 0:
        print("Before Grade1")
        return
    L = (letters / words) * 100  # Average letters per 100 words
    S = (sentences / words) * 100  # Average sentences per 100 words
    index = 0.0588 * L - 0.296 * S - 15.8

    if index < 1:
        print("Before Grade 1")
    elif index >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {round(index)}")


if __name__ == "__main__":
    main()
