# arduino-autito
Autito con el **MakerFire Chasis Blah** y el **Arduino Motor Shield**.

- Las coordenadas se forman mirando el auto verticalmente, con el Arduino hacia adelante. Las mismas están definidas en `config.h`.
- En Eclipse Arduino IDE, incluir en las rutas de compilación (propiedades del proyecto -> C/C++ Build -> Settings -> Arduino C[++] Compiler -> Include Folders): `"${workspace_loc:/autito/libraries/MotorShield}"`

## Numeración de ruedas
```
 (frente)
  1___2
  |___|
  3   4
```