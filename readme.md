# Pipex

Ce projet consiste à recréer le comportement du pipe shell (|) en C. Le programme simule le fonctionnement de la commande suivante :
```bash
< fichier1 cmd1 | cmd2 > fichier2
```

## Description

Pipex permet de rediriger l'entrée standard d'une commande vers un fichier et de connecter la sortie d'une commande à l'entrée d'une autre commande, puis de rediriger la sortie finale vers un autre fichier.

## Compilation

Pour compiler le projet, utilisez la commande :
```bash
make
```

## Utilisation

```bash
./pipex fichier1 cmd1 cmd2 fichier2
```

### Exemple
```bash
./pipex infile "ls -l" "wc -l" outfile
```
Cette commande est équivalente à : `< infile ls -l | wc -l > outfile`

## Fonctionnalités

- Gestion des pipes
- Redirection des entrées/sorties
- Exécution de commandes externes
- Gestion des erreurs
- Libération propre de la mémoire

## Structure du Projet

```
.
├── includes/       # Fichiers d'en-tête
├── sources/        # Fichiers sources
├── Makefile       # Compilation du projet
└── pipex.c        # Fichier principal
```

## Gestion d'Erreurs

Le programme gère les cas d'erreur suivants :
- Nombre incorrect d'arguments
- Fichiers inexistants ou sans permissions
- Commandes invalides
- Erreurs de pipe ou de fork

## Normes de Code

Ce projet suit les normes de codage de l'école 42 :
- Fonctions de maximum 25 lignes
- Pas plus de 5 fonctions par fichier
- Déclaration des variables en début de fonction
- Une seule déclaration par ligne