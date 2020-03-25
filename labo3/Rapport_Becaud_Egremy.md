# HEIG-VD PCO - Laboratoire 3
Auteurs :
- Arthur Bécaud (arthur.becaud@heig-vd.ch)
- Bruno Egremy (bruno.egremy@heig-vd.ch)

## Introduction
Ce laboratoire 3 du cours PCO à pour objectif de nous familiariser à la gestion de threads. Le but de ce projet est de transformer un programme monothread en multithread. Ce programme consiste à cracker un hash md5 en affichant une barre de progression.

## Conception
L'objectif est de diviser la plage de mots à hasher par le nombre de threads demandés. La modification du programme à un usage multithread résulte à cela.

![Schéma des classes](./img/UML.png)

## Implémentation
La fonctionnalité multithread a été implémentée sur deux classes :
- **ThreadManager** pour la préparation et la gestion des threads
- **MyThread** pour l'envirionnement d'exécution d'un ou plusieurs threads.

### ThreadManager
Cette classe prépare l'exécution des threads en caclulant au préalable les plages de hash à tester pour le nombre de thread demandé.



### MyThread

## Vérification du fonctionnement
