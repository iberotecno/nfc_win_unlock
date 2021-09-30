<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://iberotecno.com/">
    <img src="https://iberotecno.com/images/logo_hz.png" alt="Logo" width="277" height="46">
  </a></p>
  

  <h1 align="center">Lector NFC que desbloquea tu PC con un llavero y almacena tu contraseña en una tarjeta.</h1>
<p align="center">Hecho con ❤️ :smile: por iberotecno</p>
  <p align="center">
    Puedes obtener todas las piezas necesarias para hacer el montaje y una placa con el firmware ya grabado en:
    <br />
    <a href="https://iberotecno.com/tienda/"><strong>Tienda iberotecno »</strong></a>
    <br />
  </p>
</p>


## Introducción

<img src="https://iberotecno.com/tienda/modules/ph_simpleblog/covers/6-thumb.jpg" alt="lector NFC para desbloquear el PC" >

Este software está pensado para poder aprender y experimentar con Arduino y la tecnología NFC. El dispositivo, es capaz de emular la introducción de texto por el teclado.

* Si se detecta el llavero, se ecribirá automáticamente el PIN de desbloqueo de Windows.
* Si se detecta la tarjeta, se escribirá automáticamente una contraseña preestablecida que podemos hacer coincidir con la del correo, Gmail, KeePass... etc.
* Cada llavero y tarjeta llevan un código UID de identificación único.

Es un proyecto muy bueno para enseñar Arduino en escuelas empresas o institutos. La mejor forma de aprender es experimentar por uno mismo.

## PIN de desbloqueo de Windows

Si has comprado el Kit de iberotecno, deberás establecer como PIN de Windows el código que venga en la última página del manual de instrucciones. De lo contrario, modifica el firmware para escribir tu propio PIN y luego grabalo en la placa. La idea es que al pasar el llavero correcto por el lector, el PC se desbloquee automáticamente. Primero se simulará la presión de la tecla "espacio" para despertar el PC. Luego se introducirá el PIN y se simulará la presión de la tecla "intro" para aceptar.

## Contraseña de acceso a Gmail o programas

Si has comprado el Kit de iberotecno, deberás establecer como contraseña de tu correo o aplicaciones la clave que venga en la última página del manual de instrucciones. De lo contrario, modifica el firmware para escribir tu propia contraseña y luego grabalo en la placa. La idea es que al pasar la tarjeta correcta por el lector, la contraseña se escriba automáticamente en el campo seleccionado y se simule la presión de la tecla "intro" para aceptar el formulario.

## Programa KeePass

Este programa para Windows permite almacenar todas tus contraseñas y escribirlas automáticamente. Para que el programa se abra, se solicita una clave maestra. Podemos configurar como clave maestra la clave de la tarjeta. De esta forma, con solo abrir KeePass y pasar la tarjeta, tendremos acceso a todos los datos de acceso de nuestras webs, programas o aplicaciones.

## Posibilidad de compra en iberotecno tienda

Si no quieres fallar, te lo ponemos fácil, entra en <a href="https://iberotecno.com/tienda/">tienda.iberotecno.com</a> y podrás adquirir todas las piezas para montar este proyecto. En formato KIT.

* No tendrás problemas de compatibilidad a la hora de elegir los componentes.
* Envío rápido desde España en 24 horas.
* Soporte por chat, email o teléfono.
* Garantía de 2 años y 14 días de devolución.
* Vídeo explicativo del código fuente para aprender uno mismo o enseñar a los alumnos.

<img src="https://i.imgur.com/lloOV3z.png" alt="image" width="600" height="330" >


## Lista de materiales

1x Caja de madera<br />
1x Arduino Pro Micro <br />
1X Módulo PN535<br />
1x Llavero NFC<br />
1x Tarjeta NFC<br />
4x Cables hembra - hembra
1x Cable micro USB<br />


## Requisitos de software

Si adquieres ek kit de montaje en iberotecno tienda no necesitarás hacer nada para empezar a trabajar. Simplemente configura el PIN de Windows y contraseña de tus programas o correo que aparecen en la última página del manual de instrucciones que habrás recibido.

Si realizas el montaje por ti mismo, necesitarás realizar estos pasos previos:

* <a href="https://iberotecno.com/blog-supratecno/47-tutoriales-paso-a-paso/107-como-instalar-y-configurar-el-ide-de-arduino-tutorial">Instalar el IDE de Arduino</a><br />

Una véz hecho, descarga el firmware que necesites desde esta página y grábalo en tu placa. Recuerda que debes descargar previamente las librerías necesarias, que se indican en el código fuente.

<img src="https://iberotecno.com/tienda/img/cms/co2/pantalla/COMPRENSION.jpg" alt="image" width="530" height="330" >

## Proceso de montaje y conexiones

* Vídeo en Youtube: <a href="https://www.youtube.com/watch?v=pzQ7J2eaPns">Ver vídeo</a><br />
* Artículo explicativo en nuestro blog: <a href="https://iberotecno.com/tienda/blog/electronica/desbloquea-tu-pc">Ver artículo en Blog iberotecno</a><br />

## Manual de instrucciones

* Próximamente: <a href="https://iberotecno.com/tienda/documentos/instrucciones_co2_led.pdf">Manual en pdf</a><br />


## English

This software is capable to emulate keyboard strokes to insert the Windows PIN and unlock the PC or the password of email, programs, KeePass, etc...

* When the correct NFC keychain is detected, the PIN for unlocking Windows is inserted
* When the correct NFC card is detected, the pin of your email or programs like KeePass is inserted.
* More info at: https://iberotecno.com/tienda/blog/electronica/desbloquea-tu-pc

Thanks and enjoy!!
