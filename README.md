# DAU_Project

Current state :
Après une tentative d'installation compliqué et le manque de documentation sur godot en mode C++, j'ai décidé de faire le projet sur unreal engine. Ainsi le projet sous unreal engine 4 a été créé en janvier. Le projet contient une scène basique, une caméra à la 3ème personne qui suit le personnage, dix cubes en bois répartis dans la scène et des "cubes d'eau" qui tombent aléatoirement dans la scène. Le personnage se déplace grâce à la souris et aux touches AWSD. Le but est de récupérer tous les cubes en bois tout en collectant suffisamment souvent de l'eau pour que le personnage ne meurt pas de déshydratation.

What has been implemented :
- Une scène Unreal engine 4, à partir d'un template de jeu top-down
- Les déplacements du personnage avec la caméra qui le suit
- La collecte des cubes (bois et eau)
- Le drop aléatoire des cubes d'eau
- Le suivit dans des widget du niveau d'hydratation et nombre de bois collectés
- Un texte de victoire quand tous les cubes en bois sont collectés
- Une animation de mort quand le niveau d'hydratation tombe à zéro
- Le relancement de la scène après avoir gagné ou perdu

How to run the code :
Avoir la version 4.27.2 de Unreal. Cliquer sur le bouton play dans unreal
