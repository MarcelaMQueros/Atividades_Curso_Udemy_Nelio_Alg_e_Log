# Diagramas AFD – Linguagem MusiCode

```mermaid
stateDiagram-v2
    %% Identificadores
    [*] --> q0
    q0 --> q1: "$"
    q0 --> q1: "_"
    q1 --> q1: [a-zA-Z0-9_]
    q1 --> [*]

    %% Strings
    [*] --> q0: '"'
    q0 --> q1: qualquer caractere exceto "
    q1 --> q2: '"'
    q2 --> [*]

    %% Números Inteiros
    [*] --> q0: [0-9]
    q0 --> q1: [0-9]
    q1 --> q1: [0-9]
    q1 --> [*]

    %% Números Decimais
    [*] --> q0: [0-9]
    q0 --> q1: [0-9]
    q1 --> q2: "."
    q2 --> q3: [0-9]
    q3 --> q3: [0-9]
    q3 --> [*]

    %% Palavra-chave: nota
    [*] --> q0: "n"
    q0 --> q1: "o"
    q1 --> q2: "t"
    q2 --> q3: "a"
    q3 --> [*]

    %% Palavra-chave: instrumento
    [*] --> q0: "i"
    q0 --> q1: "n"
    q1 --> q2: "s"
    q2 --> q3: "t"
    q3 --> q4: "r"
    q4 --> q5: "u"
    q5 --> q6: "m"
    q6 --> q7: "e"
    q7 --> q8: "n"
    q8 --> q9: "t"
    q9 --> q10: "o"
    q10 --> [*]

    %% Palavra-chave: compasso
    [*] --> q0: "c"
    q0 --> q1: "o"
    q1 --> q2: "m"
    q2 --> q3: "p"
    q3 --> q4: "a"
    q4 --> q5: "s"
    q5 --> q6: "s"
    q6 --> q7: "o"
    q7 --> [*]

    %% Palavra-chave: repita
    [*] --> q0: "r"
    q0 --> q1: "e"
    q1 --> q2: "p"
    q2 --> q3: "i"
    q3 --> q4: "t"
    q4 --> q5: "a"
    q5 --> [*]

    %% Palavra-chave: bpm
    [*] --> q0: "b"
    q0 --> q1: "p"
    q1 --> q2: "m"
    q2 --> [*]

    %% Palavra-chave: play
    [*] --> q0: "p"
    q0 --> q1: "l"
    q1 --> q2: "a"
    q2 --> q3: "y"
    q3 --> [*]

    %% Palavra-chave: stop
    [*] --> q0: "s"
    q0 --> q1: "t"
    q1 --> q2: "o"
    q2 --> q3: "p"
    q3 --> [*]

    %% Comentário de Linha //
    [*] --> q0: "/"
    q0 --> q1: "/"
    q1 --> q1: qualquer caractere exceto \n
    q1 --> q2: "\n"
    q2 --> [*]

    %% Comentário em Bloco /* ... */
    [*] --> q0: "/"
    q0 --> q1: "*"
    q1 --> q1: qualquer caractere
    q1 --> q2: "*"
    q2 --> q3: "/"
    q3 --> [*]