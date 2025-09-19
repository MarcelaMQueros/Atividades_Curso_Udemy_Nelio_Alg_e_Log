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
    [*] --> q2: '"'
    q2 --> q2: qualquer caractere exceto "
    q2 --> q3: '"'
    q3 --> [*]

    %% Números Inteiros
    [*] --> q4: [0-9]
    q4 --> q4: [0-9]
    q4 --> [*]

    %% Números Decimais
    [*] --> q5: [0-9]
    q5 --> q5: [0-9]
    q5 --> q6: "."
    q6 --> q7: [0-9]
    q7 --> q7: [0-9]
    q7 --> [*]

    %% Palavra-chave: nota
    [*] --> q8: "n"
    q8 --> q9: "o"
    q9 --> q10: "t"
    q10 --> q11: "a"
    q11 --> [*]

    %% Palavra-chave: instrumento
    [*] --> q12: "i"
    q12 --> q13: "n"
    q13 --> q14: "s"
    q14 --> q15: "t"
    q15 --> q16: "r"
    q16 --> q17: "u"
    q17 --> q18: "m"
    q18 --> q19: "e"
    q19 --> q20: "n"
    q20 --> q21: "t"
    q21 --> q22: "o"
    q22 --> [*]

    %% Palavra-chave: compasso
    [*] --> q23: "c"
    q23 --> q24: "o"
    q24 --> q25: "m"
    q25 --> q26: "p"
    q26 --> q27: "a"
    q27 --> q28: "s"
    q28 --> q29: "s"
    q29 --> q30: "o"
    q30 --> [*]

    %% Palavra-chave: repita
    [*] --> q31: "r"
    q31 --> q32: "e"
    q32 --> q33: "p"
    q33 --> q34: "i"
    q34 --> q35: "t"
    q35 --> q36: "a"
    q36 --> [*]

    %% Palavra-chave: bpm
    [*] --> q37: "b"
    q37 --> q38: "p"
    q38 --> q39: "m"
    q39 --> [*]

    %% Palavra-chave: play
    [*] --> q40: "p"
    q40 --> q41: "l"
    q41 --> q42: "a"
    q42 --> q43: "y"
    q43 --> [*]

    %% Palavra-chave: stop
    [*] --> q44: "s"
    q44 --> q45: "t"
    q45 --> q46: "o"
    q46 --> q47: "p"
    q47 --> [*]

    %% Comentário de Linha //
    [*] --> q48: "/"
    q48 --> q49: "/"
    q49 --> q49: qualquer caractere exceto \n
    q49 --> q50: "\n"
    q50 --> [*]

    %% Comentário em Bloco /* ... */
    [*] --> q51: "/"
    q51 --> q52: "*"
    q52 --> q52: qualquer caractere
    q52 --> q53: "*"
    q53 --> q54: "/"
    q54 --> [*]