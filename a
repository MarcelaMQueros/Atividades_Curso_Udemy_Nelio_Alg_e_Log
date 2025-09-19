# Diagramas AFD – Linguagem MusiCode

```mermaid
stateDiagram-v2
    %% Identificadores
    [*] --> Start
    Start --> Dollar: "$"
    Start --> Underscore: "_"
    Dollar --> IdBody
    Underscore --> IdBody
    IdBody --> IdBody: [a-zA-Z0-9_]
    IdBody --> [*]

    %% Strings
    [*] --> QuoteOpen: '"'
    QuoteOpen --> Content: qualquer caractere exceto "
    Content --> Content: qualquer caractere exceto "
    Content --> QuoteClose: '"'
    QuoteClose --> [*]

    %% Números Inteiros
    [*] --> Digit
    Digit --> Digit: [0-9]
    Digit --> [*]

    %% Números Decimais
    [*] --> IntPart
    IntPart --> IntPart: [0-9]
    IntPart --> Dot: "."
    Dot --> FracPart: [0-9]
    FracPart --> FracPart: [0-9]
    FracPart --> [*]

    %% Palavra-chave: nota
    [*] --> n: "n"
    n --> no: "o"
    no --> not: "t"
    not --> nota: "a"
    nota --> [*]

    %% Palavra-chave: instrumento
    [*] --> i: "i"
    i --> in: "n"
    in --> ins: "s"
    ins --> inst: "t"
    inst --> instr: "r"
    instr --> instru: "u"
    instru --> instrum: "m"
    instrum --> instruE: "e"
    instruE --> instrumN: "n"
    instrumN --> instrumT: "t"
    instrumT --> instrumento
    instrumento --> [*]

    %% Palavra-chave: compasso
    [*] --> c: "c"
    c --> co: "o"
    co --> com: "m"
    com --> comp: "p"
    comp --> compa: "a"
    compa --> compas: "s"
    compas --> compasso: "s"
    compasso --> [*]

    %% Palavra-chave: repita
    [*] --> r: "r"
    r --> re: "e"
    re --> rep: "p"
    rep --> repi: "i"
    repi --> repit: "t"
    repit --> repita: "a"
    repita --> [*]

    %% Palavra-chave: bpm
    [*] --> b: "b"
    b --> bp: "p"
    bp --> bpm: "m"
    bpm --> [*]

    %% Palavra-chave: play
    [*] --> p: "p"
    p --> pl: "l"
    pl --> pla: "a"
    pla --> play: "y"
    play --> [*]

    %% Palavra-chave: stop
    [*] --> s: "s"
    s --> st: "t"
    st --> sto: "o"
    sto --> stop: "p"
    stop --> [*]

    %% Comentário de Linha //
    [*] --> Slash1: "/"
    Slash1 --> Slash2: "/"
    Slash2 --> CLine: qualquer caractere exceto \n
    CLine --> CLine: qualquer caractere exceto \n
    CLine --> EndLine: "\n"
    EndLine --> [*]

    %% Comentário em Bloco /* ... */
    [*] --> SlashB: "/"
    SlashB --> StarOpen: "*"
    StarOpen --> CBlock: qualquer caractere
    CBlock --> CBlock: qualquer caractere
    CBlock --> Star: "*"
    Star --> SlashClose: "/"
    SlashClose --> [*]