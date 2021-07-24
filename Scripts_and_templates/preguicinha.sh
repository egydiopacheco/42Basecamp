#!/bin/sh
echo "Bem vindo ao Preguicinha. Criador de pastas e arquivos!\n"


cat << "EOF"

    _                ___       _.--.
    \`.|\..----...-'`   `-._.-'_.-'`
    /  ' `         ,       __.--'
    )/' _/     \   `-_,   /
    `-'" `"\_  ,_.-;_.-\_ ',     Preguicinha, V.01
        _.-'_./   {_.'   ; /
       {_.-``-'         {_/


EOF


echo "Voce esta criando os seguintes arquivos: "
echo $@

echo "Criando pasta 00, criando aquivo: $1"
mkdir ex00 && cd ex00 && touch $1.c && cd ..

echo "Criando pasta 01, criando aquivo: $2"
mkdir ex01 && cd ex01 && touch $2.c && cd ..

echo "Criando pasta 02, criando aquivo: $3"
mkdir ex02 && cd ex02 && touch $3.c && cd ..

echo "Criando pasta 03, criando aquivo: $4"
mkdir ex03 && cd ex03 && touch $4.c && cd ..

echo "Criando pasta 04, criando aquivo: $5"
mkdir ex04 && cd ex04 && touch $5.c && cd ..

echo "Criando pasta 05, criando aquivo: $6"
mkdir ex05 && cd ex05 && touch $6.c && cd ..

echo "Criando pasta 06, criando aquivo: $7"
mkdir ex06 && cd ex06 && touch $7.c && cd ..

echo "Criando pasta 07, criando aquivo: $8"
mkdir ex07 && cd ex07 && touch $8.c && cd ..

echo "Criando pasta 08, criando aquivo: $9"
mkdir ex08 && cd ex08 && touch $9.c && cd ..
