
/* Textos de los idiomas prefijados y de referencia */

typedef struct __TextoPatrontag
{
	int codigo;
	char *Texto;
} __TextoPatron;

__TextoPatron __TextoPatron__[] =
{
0,"No hay programa activo(A)",
1,"Referencia a fichero erronea!",
2,"No hay programa activo(C)",
3,"No hay programa activo(B)",
4,"No hay programa activo(D)",
5,"No hay programa activo(E)",
6,"Error memoria ilegal(P.A.)",
7,"ATENCION!!!!!!  DEMASIADOS FICHEROS ABIERTOS.",
8,"CONTROL DOBLE INCORRECTO EN FASE A1",
9,"LA FECHA DEL SERVIDOR ES INCORRECTA, SEGURAMENTE MAYOR DEL A�O 2030.",
10,"VERSION DE EVALUACION!",
11,"No puede dar de Alta este Registro",
12,"Confirma alta (S/N) ..: ",
13,"Clave Inexistente en el Fichero '%s' (aviso [%d])",
14,"PROBLEMA EN CONMUTACION",
15,"DESCUADRE EN CONMUTACION",
16,"ENTRADA NO ACEPTADA EN ESTA VERSION",
17,"No tiene permiso para introducir este valor",
18,"No se permiten codigos en blanco en esta ficha!",
19,"Estructura de claves incorrecta!",
20,"Clave inexistente",
21,"No dispone de permiso para Acceder a este Registro",
22,"Primera Ficha",
23,"Ultima Ficha",
24,"No tiene permiso para Modificar este Registro",
25,"Ficha inexistente",
26,"No puede dar de Alta este Registro",
27,"Fichero CORRUPTO",
28,"No puede dar de Baja este Registro",
29,"Aviso: no hay cambio de la clave de acceso",
30,"No se puede dar de baja la ficha",
31,"Ficha inexistente o bloqueada",
32,"Se ha alcanzado el maximo numero de opciones abiertas",
33,"Atencion: El numero de subtareas internas esta excedido.",
34,"Empresa inaccesible!",
35,"NO DISPONE DE LA SERIALIZACION PARA EJECUTAR ESTE PROCESO!",
36,"No se puede cargar esta opcion!",
37,"Opcion inaccesible!",
38,"Sistema Incompatible con esta opcion!",
39,"No dispone de Permiso para acceder a esta opcion!",
40,"Tipo de impresora no configurado",
41,"Este fichero no puede usarse, Consulte al Administrador",
42,"Fichero de relacion de defs no accesible",
43,"Fichero de relacion de menu no accesible",
44,"Menu no accesible",
45,"Por fallo en la memoria no hay claves!!",
46,"%s es demasiado grande, hay que quitarle comentarios.",
47,"El sistema dll de momento solo disponible en entorno win32",
48,"OPERACION ANULADA",
49,"Falta Instalar el Modulo para Enlace Excel",
50,"Error: No se puede acceder a un PRC.",
51,"Fallo de CONEXION en envio!",
52,"PROBLEMA DE MEMORIA",
53,"Control 1 lee permisos",
54,"Control 2 lee permisos",
55,"Clave de Accesos Incorrecta.",
56,"Ha alcanzado el limite maximo de accesos contratados.",
57,"Ha alcanzado el limite maximo de puestos contratados.",
58,"Clave de servidor incorrecta.",
59,"Este codigo de usuario ya esta en uso.",
60,"Falta Instalar el Modulo para Impresion Avanzada",
61,"Se Anulan los datos Entrados",
62,"Aviso de Control Interno 42 [%d][%d][%d][%d][%d][%d][%d]",
63,"No Hay Registros!!",
64,"error de registro corriente en consul_clave 1",
65,"No se encuentra coincidencia!!",
66,"Fichero...:",
67,"Operacion.:",
68,"AVISO:",
69,"Ficha bloqueada por otro usuario",
70,"Ficha Inexistente",
71,"Ficha existente",
72,"Limite del fichero",
73,"ALTA NO REALIZADA, DESMOSTRACION",
74,"[%d] NO AUTORIZADO EN DEMO",
75,"LIMITE DE ENTRADAS DE LA VERSION",
76,"Pulse 'N' ABORTA EL PROGRAMA",
77,"Clave incorrecta",
78,"DEBE REINICIAR PARA QUE SE EFECTUE LA INSTALACION!",
79,"USE LA OPCION DE REINSTALAR",
80,"No se pudo instalar",
81,"DEBE REINICIAR PARA QUE SE EFECTUE LA INSTALACION!",
82,"NO SE ENCONTRO INSTALACION O DISCO INCORRECTO",
83,"NO dispone de AYUDA para esta opci�n",
84,"Formato incompatible con Diagram9",
85,"HA ENTRADO EN ESTA OPCION EN MODO DEMO",
86,"HA EXCEDIDO EL NUMERO DE PUESTOS CONTRATADOS",
87,"HA EXCEDIDO EL NUMERO DE ACCESOS CONTRATADOS",
88,"Modulo AGMK no Instalado!!",
89,"No tiene permiso o por algun motivo no puede activar el numero de oro",
90,"PERIODO DE PRUEBAS FINALIZADO, DEBE SERIALIZAR CORRECTAMENTE LA INSTALACION!",
91,"PERIODO DE PRUEBAS NO APLICABLE, DEBE SERIALIZAR CORRECTAMENTE LA INSTALACION!",
92,"Falta Codigo de Sistema Adecuado",
93,"No corresponde la clave con Diagram9",
94,"Falta modulo de instalacion",
95,"Falta Codigo de Sistema Adecuado",
96,"NO HAY MAS PARA RATON",
97,"Espera colada",
98,"Control de espera fuera de orden",
99,"atencion tgz 1",
100,"atencion tgz 2",
101,"AVISO",
102,"CLAVE INCORRECTA",
103,"No se encuentra o no se puede ejecutar daclaves.dll",
104,"No se puede acceder a agirwmm1.dll adecuadamente.",
105,"EXCEDIDO MENSAJE INTERNO",
106,"LA FECHA DE SU SISTEMA ES INCORRECTA, SEGURAMENTE MAYOR DEL A�O 2030.",
107,"Entre la Direccion del Servidor:",
108,"ESTABLECIENDO CONEXION CON (%s",
109,"CLIENTE A (%s",
110,"RECONECTANDO CON (%s",
111,"RECONECTADO CLIENTE A (%s",
112,"MALA OPCION CLIENTE-SERVIDOR: %s",
113,"FALLO EN INICIALIZACION DE LOS SOCKETS DE WINDOWS",
114,"NO HAY SOCKETS DISPONIBLES",
115,"Imposible abrir un socket:%d.\r\n",
116,"Sin servicio!",
117,"Sin respuesta adecuada!",
118,"Sin respuesta adecuada!\r\n",
119,"DENEGADO EL SERVICIO POR RWNETCON!",
120,"DENEGADO EL SERVICIO POR RWNETCON!\r\n",
121,"NO HAY SOCKETS DISPONIBLES PARA CONTINUAR",
122,"Imposible abrir socket de servidor:%d.\r\n",
123,"ESTE SISTEMA SOLO PUEDE SER CLIENTE!",
124,"Actualizado!. Puede acceder normalmente.",
125,"IMPOSIBLE ACTUALIZACION AUTOMATICA: LA FECHA DEL SERVIDOR ES INCORRECTA!",
126,"SU VERSION ES INCORRECTA: IMPOSIBLE ACTUALIZACION AUTOMATICA",
127,"CONEXION %s DENEGADA!",
128,"CONEXION %s ACEPTADA",
129,"ROTA LA CONEXION",
130,"ROTA LA CONEXION!!",
131,"FICHERO SPOOL NO UTILIZABLE EN SERVIDOR",
132,"EL DISPOSITIVO DE IMPRESION NO SE PUEDE ABRIR EN EL SERVIDOR",
133,"Nombre largo",
134,"control fichero_local_remoto",
135,"ERROR EN SISTEMA DE CACHE DE FICHEROS CLIENTE-SERVIDOR A1",
136,"ROTA LA CONEXION",
137,"ROTA LA CONEXION!!",
138,"MAL MENSAJE 4",
139,"MAL MENSAJE 5",
140,"No se acepta la version del servidor",
141,"LA VERSION DEL CLIENTE ES INFERIOR A LO REQUERIDO",
142,"El SERVIDOR SE VA A ACTUALIZAR",
143,"LA CONEXION CON EL SERVIDOR SE HA ROTO!! REINTENTO EN 60 Segundos",
144,"SIN CONFIRMACION",
145,"TIMEOUT",
146,"AGOTADOS LOS BOTONES!",
147,"uso incorrecto de menusg_...",
148,"falta ojo al dato",
149,"Fallo al crear la paleta del DIB",
150,"Aviso de Control Interno de Sistema N�mero %d",
151,"Solo se Programa desde la Funcion 11 hasta la 20",
152,"Anulada la Programaci�n de la Funci�n",
153,"Solo se pueden programar opciones con acceso directo",
154,"Funcion %d Programada con: %s",
155,"La Funcion no se ha grabado permanentemente",
156,"ESPERE A QUE EL PROCESO EN CURSO TERMINE O PIDA UN ENTRADA DE DATOS",
157,"Anulada la Programaci�n de la Funci�n",
158,"Salida!!",
159,"Control en dat_pasa_a_campo [B]",
160,"Aviso de Control de Averia en recuperacion de datos [%d]",
161,"No se ha actualizado  !!!!!!!",
162,"(XX) No se ha actualizado  !!!!!!!",
163,"No se ha actualizado!!!",
164,"Aviso de Control de Averia en el Indice [%d]",
165,"FORMATO DE COMPRESION (gzip) CORRUPTO",
166,"LA FECHA DE SU SISTEMA ES INCORRECTA, SEGURAMENTE MAYOR DEL A�O 2030.",
167,"FALLO EN INICIALIZACION DE LOS SOCKETS DE WINDOWS",
168,"NO HAY SOCKETS DISPONIBLES",
169,"No hay servicio RWNETCON en (%s:%u)",
170,"Sin servicio!",
171,"Sin respuesta adecuada!",
172,"DENEGADO EL SERVICIO POR RWNETCON!",
173,"NO HAY SOCKETS DISPONIBLES PARA CONTINUAR",
174,"No existe conexion a servidor en (%s:%u)",
175,"CONEXION %s DENEGADA!",
176,"CONEXION %s ACEPTADA",
177,"CONEXION %s TIMEOUT!",
178,"INSTALACIONES %d.%02d.%03d",
179,"PARAMETROS INTERNOS INCORRECTOS!!",
180,"Fichero de secuencia 'volume' incorrecto!!",
181,"ERROR: No se puede instalar si alguien esta ejecutando un programa.",
182,"ATENCION: Solo se copiaran los instalables! (Hay programas ejecutandose!)",
183,"NO SE PUEDEN OBTENER LOS PAQUETES NECESARIOS",
184,"Fuera de orden %s (%d),posible error en 'volume'!",
185,"SOLO SE COPIO EL INSTALABLE! (Debe Reinicilizar el Servidor)",
186,"NO SE INSTALA, SOLO COPIADO!",
187,"No se Instalo %s, No instale desde 'master'",
188,"'VOLUME' FUERA DE SECUENCIA",
189,"Aviso de Control Interno de Sistema N�mero %d",
190,"Consulta,Mod.,Alta de %s",
191,"Consulta de %s",
192,"{ORDENANDO}%s",
193,"ORDENANDO%s",
194,"SECUENCIA %10.10s",
195,"SECUENCIA %10.10s",
196,"SECUENCIA %10.10s",
197,"SECUENCIA %10.10s",
198,"Seleccion",
199,"Inserte DISCO o SOPORTE Numero %d u otro que contenga %s",
200,"Preparando Instalacion ... Espere!",
201,"Preparando Instalacion FORMATO CLASICO ... Espere!",
202,"CONVIRTIENDO INSTALACION A FORMATO STANDARD ... Espere! .",
203,"CONVIRTIENDO INSTALACION A FORMATO STANDARD ... Espere! ..",
204,"CONVIRTIENDO INSTALACION A FORMATO STANDARD ... Espere! ...",
205,"Preparando Instalacion ... Espere!",
206,"Instalando %s",
207,"Reintentando escribir %s",
208,"No se puede escribir %s!",
209,"Esperando a tener el control de las instalaciones ...",
210,"SE ESTA INSTALANDO ALGUN PROGRAMA!!",
211,"Registrando nuevas aplicaciones encontradas en master ...",
212,"CONECTADO CON RWNETCON (%s",
213,"ASIGNADA CONEXION POR RWNETCON:%s",
214,"CONECTADO CON:%s",
215,"HAY QUE ACTUALIZAR EL RUNTIME CLIENTE, �CONTINUAR? ",
216,"MAL MENSAJE 1",
217,"Pulse el Boton Izquierdo del Raton Para Acceder a la Opcion",
218,"Pulse el Boton Izquierdo del Raton Para Seleccionar la Opcion",
219,"Pulse la Tecla de Funcion a Programar",
220,"Seleccione en el Menu la Opci�n a asociar con la Funci�n",
221,"ESTABLECIENDO CONEXION CON (%s",
222,"MALA OPCION CLIENTE-SERVIDOR: %s",
223,"CONECTADO CON RWNETCON (%s",
224,"ASIGNADA CONEXION POR RWNETCON:%s",
225,"CONECTADO CON:%s",
226,"ESPECIFIQUE UNIDAD o ENTRADA EN BLANCO,CON @direccion OTRO SERVIDOR",
227,"Preparando Instalacion ...",
228,"Preparando Instalacion ... Espere!",
229,"No se puede copiar el fichero %s ...",
230,"Inserte DISCO o SOPORTE Numero %d u otro que contenga %s",
231,"Preparando Instalacion ... Espere!",
232,"No se ejecuta:%s errno:%d.",
233,"SE ESTA RECONSTRUYENDO EL INDICE",
234,"      ESPERE, POR FAVOR",
235,"INDEXACION de %s",
236,"Total posibles registros:%7ld Incluyendo ya borrados",
237,"Registro actual:        ",
238,"PASE DE DATOS de %s",
239,"Total registros:%7ld",
240,"Registro actual:",
241,"Minutos restantes ESTIMADOS:",
242,"Fichero: ",
243,"Los DATOS necesitan un CAMBIO de VERSION!",
244,"La longitud del REGISTRO es MAYOR!",
245,"La longitud del REGISTRO es MENOR!",
246,"Long. Fichero = %lu  Long. DEF = %lu",
247,"Ha VARIADO el NUMERO DE CLAVES!",
248,"Claves Fichero = %lu  Claves DEF = %lu",
249,"Ha VARIADO alguna CLAVE!",
250,"Si se repite con este fichero, pongase  en  contacto",
251,"No debe continuar en la opcion,  pongase  en  contacto",
252,"con el servicio de mantenimiento que tenga contratado.",
253,"Suma campo numerico %d \n\r",
254,"f %d. accion ",
255,"Hay %d Paquetes Por Actualizar, Entre en la Opcion de Instalaciones",
256,"Relacion incorrecta %s->%s",
257,"-----> ENTRANDO EN MODIFICACION (Consulta) DE :[%s],[%s]",
258,"-----> SALIENDO DE MODIFICACION (Consulta) DE :[%s],[%s]",
259,"No dispone de Permiso para acceder a los datos:%s",
260,"ENTRANDO EN ALTA DE :[%s],[%s]",
261,"SALIENDO DE ALTA DE :[%s],[%s]",
262,"ENTRANDO EN MODIFICACION DE :[%s],[%s]",
263,"SALIENDO DE MODIFICACION DE :[%s],[%s]",
264,"ENTRANDO EN BAJA DE :[%s],[%s]",
265,"SALIENDO DE BAJA DE :[%s],[%s]",
266,"ENTRANDO EN IMPRIMIR DE :[%s],[%s]",
267,"SALIENDO DE IMPRIMIR DE :[%s],[%s]",
268,"TRACER ---> CALCULO %s NO ACCESIBLE",
269,"TRACER ---> INCLUYE %s NO ACCESIBLE",
270,"mapa de traza ilegal[%d][%d]",
271,"ENTRANDO EN EL TAB:[%s],[%s]",
272,"SALIENDO DEL TAB:[%s],[%s]",
273,"menu inexistente %s",
274,"algo va mal pues el trato con informes implica un programa activo",
275,"Impresora ....:",
276,"Fichero Spool :",
277,"Instalacion incorrecta (f.l.) value [%d] max [%d]",
278,"Instalacion incorrecta falta .prc [%s]",
279,"llamada directa erronea(mal enlace de rutina)",
280,"Error no hay programa_activo",
281,",Licencia:%06ld ",
282,"La estructura del fichero no coincide con los datos.",
283,"Entre su Codigo de Usuario:[          ]",
284,"Clave de Acceso[          ]",
285,"operacion letras con numerica es ilegal!!!",
286,"\n\rError trata el buffer.\n\r",
287,"No se pudo actualizar %s, Posibles runtimes en ejecucion",
288,"Actualizar %s -%s- (S/N)",
289,"LISTA de %s",
290,"Entre la CLAVE :",
291,"Pulse INTRO o entre nuevo origen:",
292,"Entre Origen de la Instalacion:",
293,"fichero ilegal[%d][%d]",
294,"Atencion al ipfi[%d]",
295,"PASA ALGO RARO CON EL IPFI[%d]",
296,"NO PUEDO RECUPERAR EL DEF!!![%s]",
297,"memoria temporal[%d]!=[%d]",
298,"el alloca a fallado[%d]",
299,"recursion no autorizada",
300,"ya no hay\n",
301,"PEDIDO [%u]",
302,"bad line (%d) in initialization file",
303,"Indentificador Desconocido (%s)",
304,"\n%d,1:Acceso a Empresa {{%s0 %s fich %s %s}}\n",
305,"%d,2:Definir Empresas {{%s0 %s fich %s NULL}}\n",
306,"Limitado [",
307,"]desde[",
308,"]hasta[",
309,"fichero no enlazado[%s]",
310,"memoria externa no enlazada[%s]",
311,"Actualizando %s.\n",
312,"Clave :",
313,"CAMPO (%d)%s ",
314,"*****************NO SE ACTUALIZA NADA!!.****************\n",
315,"*****************SE ACTUALIZAN %d CAMPOS.******************\n",
316,"Nueva ficha %s.\n",
317,"Clave :",
318,"Grabada ficha nueva ",
319,"Clave: ",
320,"Error al grabar nueva ",
321,"Clave: ",
322,"ACTUALIZACION NO BLOQUEADA!: ",
323,"Actualizada ficha ",
324,"Clave: ",
325,"Error al actualizar ",
326,"Clave: ",
327,"Error memo: %d \r\n",
328,"Pulse tecla",
329,"No hay entorno correcto en %s. Indique la ruta al llamar al programa",
330," Entre su N�mero de Activaci�n ",
331,"IDENTIFICACION:",
332,"N�mero de ORO.:",
333,"Activaci�n....:",
334,"TELEFONOS PARA SOLICITAR CLAVE BASICA",
335,"902100177 / 965337743",
336,"Versi�n de pruebas, dispone de %d dias aproximadamente!",
337,"Dispone de %d dias aproximadamente!, Recuerde pedir la clave b�sica!!",
338,"Ultimo dia!!, VUELVA A ACCEDER Y PIDA LA CLAVE BASICA HOY!!",
339,"Instalacion Incorrecta o Sin Modulo de Proteccion Adecuado [%d]",
340," NUMERO DE LICENCIA:%06lu ",
341,"El S.O. ha causado un error de proteccion general",
342,"DESEA CONTINUAR? [ ]",
343,"**NO CONTINUAR SI NO SE ESTA MUY SEGURO**",
344,"RECUPERADO SIGNAL %d",
345,"  PROCESO DETENIDO  ",
346,"  Return = Seguir   ",
347,"  Ctr-C = Abandonar ",
348,"CONFIGURACION ACTUAL DE LAS TECLAS ESPECIALES",
349,"FUNCION",
350,"TECLA",
351,"DESCRIPCION/PROGRAMACION",
352,"\007Veces:",
353,"NO HAY MEMORIA!!!!!!!",
354,"Busca:",
355,"Reemplaza:",
356,"Todos",
357,"Margen Izquierdo:",
358,"Margen Derecho:",
359,"Grabar al fichero:",
360,"Leer del fichero:",
361," Automatico ",
362," Manual ",
363,"AM",
364,"Pulse <Av.Pag.> para Lineas",
365,"",
366,"",
367,"",
368,"",
369,"",
370,"Pulse una tecla",
371,"\n\r ERROR EN ASIGNACION DE MEMORIA ...\n\r",
372," NO HAY MEMORIA PARA OPERAR : OPERACION ABORTADA. \n\r",
373,"heapchecknode erroneo=[%d]",
374,"\n PUNTERO %lx ENCONTRADO EN FREE\n",
375,"\n FREE %lx ILEGAL \n",
376,"\n PUNTERO %lx ENCONTRADO EN MALLOC\n",
377,"\n\r voy a pedir para %d MAXI ASIGNADA %ld",
378,"\n\r ya he pedido para %d ",
379,"Listados Bloque %d",
380,"Listados Bloque %d",
381,"Aceptar opci�n con %s o �ndice,Abandonar %s,Seleccionar con Cursores.",
382,"Esta Instalacion requiere Diagram %d.%02d.%03d o superior",
383,"Desea Efectuar la Instalacion (S/N)? ",
384,"SE DEBE ACTUALIZAR EL HLP!\n",
385,"No hay servicio RWNETCON en (%s:%u)",
386,"Sin servicio!\r\n",
387,"No existe conexion a servidor en (%s:%u)",
388,"Bind Erroneo:%d.\r\n",
389,"Listen Fallido\r\n",
390,"Fallo en accept:%d.\r\n",
391,"DESCONECTADO de %d.%d.%d.%d: REALMENTE NO SOY UN SERVIDOR (NO TENGO LICENCIA)\r\n",
392,"SERVIDOR A %d.%d.%d.%d",
393,"DESCONECTADO: EL TERMINAL NO ACEPTA MI VERSION\r\n",
394,"Desconectando ...",
395,"DESCONECTADO: NO SE ACEPTA LA VERSION DE TERMINAL\r\n",
396,"non trobata[%ld] [%d][%d]",
397,"Pulse Tecla o Boton",
398,"No se puede comenzar el proceso de impresion [%d]",
399,"Funci�n%d Programada con %s",
400,"Funci�n %d (F%d)",
401,"Funci�n %d (Ctrl-F%d)",
402,"VALIDAR",
403,"ANTERIOR",
404,"SIGUIENTE",
405,"CANCELAR",
406,"LISTADO",
407,"RELACION",
408,"AVANCE PAGINA",
409,"RETROCEDER PAGINA",
410,"AYUDA",
411,"PROGRAMACION DE FUNCION",
412,"Pulse el bot�n izquierdo para seleccionar la opcion",
413,"Entre Descripcion Para la Funcion%d",
414,"Listados Bloque %d",
415,"Listados Bloque %d",
416,"Recibiendo ",
417,"CI[%d][%d]FICHERO ",
418,"Error [%d] en lectura de %s",
419,"ATENCION: ����FATAL!!!! UNIDAD O PARTICION LLENA [%d]",
420,"Error en posicionamiento de fichero, posible disco corrupto [%d]",
421,"COMPLETADO........",
422,"Entre la Direccion del Servidor:",
423,"Entre direccion de red del servidor:",
424,"Entre Origen de la Instalacion:",
425," Desea Efectuar la Instalacion (S/N)? ",
426,"Entre Directorio Destino:",
427,"Pulse INTRO o entre nuevo origen:",
428,"POR FAVOR, REINICIALICE EL SISTEMA\r\n",
429,"Pulse tecla",
430,"MODO DEMOSTRACION",
431,"Es correcto (S/N)",
432,"ASEGURESE DE QUE NO HAYA NADIE USANDO ESTE FICHERO, �ABORTAR? ",
433,"Confirmacion baja (S/N) ..: ",
434," Desea Continuar la Instalacion (S/N)? ",
435," Desea Efectuar la Instalacion (S/N)? ",
436,"NO hay AYUDA para esta opci�n!, Desea editarla? ",
437,"Error en Impresora o sin papel �Reintentar? ",
438,"Desea Efectuar la Instalacion (S/N)? ",
439,"Desea Efectuar la Instalacion (S/N)? ",
440,"Desea Efectuar la Instalacion (S/N)? ",
441," Desea Efectuar la Instalacion (S/N)? ",
442," Desea Efectuar la Instalacion (S/N)? ",
443," Desea Continuar la Instalacion (S/N)? ",
444," Es mejor contestar N y reiniciar el sistema, Continuar (S/N)? ",
445," Desea Continuar la Instalacion (S/N)? ",
446," Desea Continuar la Instalacion (S/N)? ",
447,"N",/*447*/
448,"S",/*448*/
449,"SN",
450,"HAY PROGRAMAS EJECUTANDOSE!!,CON 'S' SE ANULARAN, MEJOR LO HAGA MANUALMENTE",
451,"n",/*451*/
452,"s",/*452*/
453,"No se pueden anular los otros programas!",
454,"BLOQUEADO",
455," INEXSISTENTE!!",
456," ALTERADO O INCORRECTO!!",
457," INCORRECTO!!",
458," ALTERADO!!",
459,"No limitado ",
460,"Domingo",
461,"Lunes",
462,"Martes",
463,"Miercoles",
464,"Jueves",
465,"Viernes",
466,"Sabado",
467,"Enero",
468,"Febrero",
469,"Marzo",
470,"Abril",
471,"Mayo",
472,"Junio",
473,"Julio",
474,"Agosto",
475,"Septiembre",
476,"Octubre",
477,"Noviembre",
478,"Diciembre",
479,"%02d de %s de %04d%c",
480,"AYUDA ",
481,"Preparando la ayuda de %s por primera vez ...",
482,"Actualizando la ayuda de %s ...",
483,"Grabar ficha",
484," Modificacion ",
485," Baja ",
486,"MB",
487," Validar ",
488," Clave ",
489," Sig. ",
490," Ant. ",
491," Primera ",
492," Ultima ",
493," Modificar ",
494," Imprime ",
495,"VCSAPUMI",
496," Alta ",
497," Consulta ",
498," Modificacion ",
499," Baja ",
500," Imprimir ",
501,"ACMBI",
502,"Pulse <Av.Pag.> para Lineas",
503,"Pulse <Av.Pag.> para Siguiente P�gina",
504,"Pulse <Re.Pag.> para anterior P�gina",
505,",<Re.Pag.> para anterior P�gina",
506,"Pulse <Av.Pag.> para Siguiente P�gina",
507,"Leer ficha",
508,"Grabar ficha",
509,"Borrar ficha",
510,"SISTEMA DE FICHEROS INCORRECTO",
511,"No hay servicio dsKEY en (%s:%u)",
512,"NO HAY SOCKETS DISPONIBLES",
513,"FALLO EN INICIALIZACION DE LOS SOCKETS DE WINDOWS",
514,"Despues de editar vuelva a pedir la ayuda en la misma opcion",
515,"LA CONEXION CON EL SERVIDOR SE HA ROTO (EXCEPCION)!! REINTENTO EN 60 Segundos",
516,"Aviso de Control en pase BTRIEVE[%d][%d]",
517,"Acceso %d (%d tasks)",
518,"#0:MENU GENERAL\n",
519,"No puede acceder desde este puesto!",
520,"Ya hay un Super-Usuario en el sistema",
521,"Debe seleccionar una opcion, no un submenu",
522,"Fichero de passwords alterado!",
523,"Falta configuracion de superusuario",
524,"Ha habido un acceso a datos incorrectos",
526,"Configuraci�n erronea del ERP",
527,"Instalaci�n en progreso",
528,(char *)0,
};


char *__Texto[] =
{
"No hay programa activo(A)",
"Referencia a fichero erronea!",
"No hay programa activo(C)",
"No hay programa activo(B)",
"No hay programa activo(D)",
"No hay programa activo(E)",
"Error memoria ilegal(P.A.)",
"ATENCION!!!!!!  DEMASIADOS FICHEROS ABIERTOS.",
"CONTROL DOBLE INCORRECTO EN FASE A1",
"LA FECHA DEL SERVIDOR ES INCORRECTA, SEGURAMENTE MAYOR DEL A�O 2030.",
"VERSION DE EVALUACION!",
"No puede dar de Alta este Registro",
"Confirma alta (S/N) ..: ",
"Clave Inexistente en el Fichero '%s' (aviso [%d])",
"PROBLEMA EN CONMUTACION",
"DESCUADRE EN CONMUTACION",
"ENTRADA NO ACEPTADA EN ESTA VERSION",
"No tiene permiso para introducir este valor",
"No se permiten codigos en blanco en esta ficha!",
"Estructura de claves incorrecta!",
"Clave inexistente",
"No dispone de permiso para Acceder a este Registro",
"Primera Ficha",
"Ultima Ficha",
"No tiene permiso para Modificar este Registro",
"Ficha inexistente",
"No puede dar de Alta este Registro",
"Fichero CORRUPTO",
"No puede dar de Baja este Registro",
"Aviso: no hay cambio de la clave de acceso",
"No se puede dar de baja la ficha",
"Ficha inexistente o bloqueada",
"Se ha alcanzado el maximo numero de opciones abiertas",
"Atencion: El numero de subtareas internas esta excedido.",
"Empresa inaccesible!",
"NO DISPONE DE LA SERIALIZACION PARA EJECUTAR ESTE PROCESO!",
"No se puede cargar esta opcion!",
"Opcion inaccesible!",
"Sistema Incompatible con esta opcion!",
"No dispone de Permiso para acceder a esta opcion!",
"Tipo de impresora no configurado",
"Este fichero no puede usarse, Consulte al Administrador",
"Fichero de relacion de defs no accesible",
"Fichero de relacion de menu no accesible",
"Menu no accesible",
"Por fallo en la memoria no hay claves!!",
"%s es demasiado grande, hay que quitarle comentarios.",
"El sistema dll de momento solo disponible en entorno win32",
"OPERACION ANULADA",
"Falta Instalar el Modulo para Enlace Excel",
"Error: No se puede acceder a un PRC.",
"Fallo de CONEXION en envio!",
"PROBLEMA DE MEMORIA",
"Control 1 lee permisos",
"Control 2 lee permisos",
"Clave de Accesos Incorrecta.",
"Ha alcanzado el limite maximo de accesos contratados.",
"Ha alcanzado el limite maximo de puestos contratados.",
"Clave de servidor incorrecta.",
"Este codigo de usuario ya esta en uso.",
"Falta Instalar el Modulo para Impresion Avanzada",
"Se Anulan los datos Entrados",
"Aviso de Control Interno 42 [%d][%d][%d][%d][%d][%d][%d]",
"No Hay Registros!!",
"error de registro corriente en consul_clave 1",
"No se encuentra coincidencia!!",
"Fichero...:",
"Operacion.:",
"AVISO:",
"Ficha bloqueada por otro usuario",
"Ficha Inexistente",
"Ficha existente",
"Limite del fichero",
"ALTA NO REALIZADA, DESMOSTRACION",
"[%d] NO AUTORIZADO EN DEMO",
"LIMITE DE ENTRADAS DE LA VERSION",
"Pulse 'N' ABORTA EL PROGRAMA",
"Clave incorrecta",
"DEBE REINICIAR PARA QUE SE EFECTUE LA INSTALACION!",
"USE LA OPCION DE REINSTALAR",
"No se pudo instalar",
"DEBE REINICIAR PARA QUE SE EFECTUE LA INSTALACION!",
"NO SE ENCONTRO INSTALACION O DISCO INCORRECTO",
"NO dispone de AYUDA para esta opci�n",
"Formato incompatible con Diagram9",
"HA ENTRADO EN ESTA OPCION EN MODO DEMO",
"HA EXCEDIDO EL NUMERO DE PUESTOS CONTRATADOS",
"HA EXCEDIDO EL NUMERO DE ACCESOS CONTRATADOS",
"Modulo AGMK no Instalado!!",
"No tiene permiso o por algun motivo no puede activar el numero de oro",
"PERIODO DE PRUEBAS FINALIZADO, DEBE SERIALIZAR CORRECTAMENTE LA INSTALACION!",
"PERIODO DE PRUEBAS NO APLICABLE, DEBE SERIALIZAR CORRECTAMENTE LA INSTALACION!",
"Falta Codigo de Sistema Adecuado",
"No corresponde la clave con Diagram9",
"Falta modulo de instalacion",
"Falta Codigo de Sistema Adecuado",
"NO HAY MAS PARA RATON",
"Espera colada",
"Control de espera fuera de orden",
"atencion tgz 1",
"atencion tgz 2",
"AVISO",
"CLAVE INCORRECTA",
"No se encuentra o no se puede ejecutar daclaves.dll",
"No se puede acceder a agirwmm1.dll adecuadamente.",
"EXCEDIDO MENSAJE INTERNO",
"LA FECHA DE SU SISTEMA ES INCORRECTA, SEGURAMENTE MAYOR DEL A�O 2030.",
"Entre la Direccion del Servidor:",
"ESTABLECIENDO CONEXION CON (%s",
"CLIENTE A (%s",
"RECONECTANDO CON (%s",
"RECONECTADO CLIENTE A (%s",
"MALA OPCION CLIENTE-SERVIDOR: %s",
"FALLO EN INICIALIZACION DE LOS SOCKETS DE WINDOWS",
"NO HAY SOCKETS DISPONIBLES",
"Imposible abrir un socket:%d.\r\n",
"Sin servicio!",
"Sin respuesta adecuada!",
"Sin respuesta adecuada!\r\n",
"DENEGADO EL SERVICIO POR RWNETCON!",
"DENEGADO EL SERVICIO POR RWNETCON!\r\n",
"NO HAY SOCKETS DISPONIBLES PARA CONTINUAR",
"Imposible abrir socket de servidor:%d.\r\n",
"ESTE SISTEMA SOLO PUEDE SER CLIENTE!",
"Actualizado!. Puede acceder normalmente.",
"IMPOSIBLE ACTUALIZACION AUTOMATICA: LA FECHA DEL SERVIDOR ES INCORRECTA!",
"SU VERSION ES INCORRECTA: IMPOSIBLE ACTUALIZACION AUTOMATICA",
"CONEXION %s DENEGADA!",
"CONEXION %s ACEPTADA",
"ROTA LA CONEXION",
"ROTA LA CONEXION!!",
"FICHERO SPOOL NO UTILIZABLE EN SERVIDOR",
"EL DISPOSITIVO DE IMPRESION NO SE PUEDE ABRIR EN EL SERVIDOR",
"Nombre largo",
"control fichero_local_remoto",
"ERROR EN SISTEMA DE CACHE DE FICHEROS CLIENTE-SERVIDOR A1",
"ROTA LA CONEXION",
"ROTA LA CONEXION!!",
"MAL MENSAJE 4",
"MAL MENSAJE 5",
"No se acepta la version del servidor",
"LA VERSION DEL CLIENTE ES INFERIOR A LO REQUERIDO",
"El SERVIDOR SE VA A ACTUALIZAR",
"LA CONEXION CON EL SERVIDOR SE HA ROTO!! REINTENTO EN 60 Segundos",
"SIN CONFIRMACION",
"TIMEOUT",
"AGOTADOS LOS BOTONES!",
"uso incorrecto de menusg_...",
"falta ojo al dato",
"Fallo al crear la paleta del DIB",
"Aviso de Control Interno de Sistema N�mero %d",
"Solo se Programa desde la Funcion 11 hasta la 20",
"Anulada la Programaci�n de la Funci�n",
"Solo se pueden programar opciones con acceso directo",
"Funcion %d Programada con: %s",
"La Funcion no se ha grabado permanentemente",
"ESPERE A QUE EL PROCESO EN CURSO TERMINE O PIDA UN ENTRADA DE DATOS",
"Anulada la Programaci�n de la Funci�n",
"Salida!!",
"Control en dat_pasa_a_campo [B]",
"Aviso de Control de Averia en recuperacion de datos [%d]",
"No se ha actualizado  !!!!!!!",
"(XX) No se ha actualizado  !!!!!!!",
"No se ha actualizado!!!",
"Aviso de Control de Averia en el Indice [%d]",
"FORMATO DE COMPRESION (gzip) CORRUPTO",
"LA FECHA DE SU SISTEMA ES INCORRECTA, SEGURAMENTE MAYOR DEL A�O 2030.",
"FALLO EN INICIALIZACION DE LOS SOCKETS DE WINDOWS",
"NO HAY SOCKETS DISPONIBLES",
"No hay servicio RWNETCON en (%s:%u)",
"Sin servicio!",
"Sin respuesta adecuada!",
"DENEGADO EL SERVICIO POR RWNETCON!",
"NO HAY SOCKETS DISPONIBLES PARA CONTINUAR",
"No existe conexion a servidor en (%s:%u)",
"CONEXION %s DENEGADA!",
"CONEXION %s ACEPTADA",
"CONEXION %s TIMEOUT!",
"INSTALACIONES %d.%02d.%03d",
"PARAMETROS INTERNOS INCORRECTOS!!",
"Fichero de secuencia 'volume' incorrecto!!",
"ERROR: No se puede instalar si alguien esta ejecutando un programa.",
"ATENCION: Solo se copiaran los instalables! (Hay programas ejecutandose!)",
"NO SE PUEDEN OBTENER LOS PAQUETES NECESARIOS",
"Fuera de orden %s (%d),posible error en 'volume'!",
"SOLO SE COPIO EL INSTALABLE! (Debe Reinicilizar el Servidor)",
"NO SE INSTALA, SOLO COPIADO!",
"No se Instalo %s, No instale desde 'master'",
"'VOLUME' FUERA DE SECUENCIA",
"Aviso de Control Interno de Sistema N�mero %d",
"Consulta,Mod.,Alta de %s",
"Consulta de %s",
"{ORDENANDO}%s",
"ORDENANDO%s",
"SECUENCIA %10.10s",
"SECUENCIA %10.10s",
"SECUENCIA %10.10s",
"SECUENCIA %10.10s",
"Seleccion",
"Inserte DISCO o SOPORTE Numero %d u otro que contenga %s",
"Preparando Instalacion ... Espere!",
"Preparando Instalacion FORMATO CLASICO ... Espere!",
"CONVIRTIENDO INSTALACION A FORMATO STANDARD ... Espere! .",
"CONVIRTIENDO INSTALACION A FORMATO STANDARD ... Espere! ..",
"CONVIRTIENDO INSTALACION A FORMATO STANDARD ... Espere! ...",
"Preparando Instalacion ... Espere!",
"Instalando %s",
"Reintentando escribir %s",
"No se puede escribir %s!",
"Esperando a tener el control de las instalaciones ...",
"SE ESTA INSTALANDO ALGUN PROGRAMA!!",
"Registrando nuevas aplicaciones encontradas en master ...",
"CONECTADO CON RWNETCON (%s",
"ASIGNADA CONEXION POR RWNETCON:%s",
"CONECTADO CON:%s",
"HAY QUE ACTUALIZAR EL RUNTIME CLIENTE, �CONTINUAR? ",
"MAL MENSAJE 1",
"Pulse el Boton Izquierdo del Raton Para Acceder a la Opcion",
"Pulse el Boton Izquierdo del Raton Para Seleccionar la Opcion",
"Pulse la Tecla de Funcion a Programar",
"Seleccione en el Menu la Opci�n a asociar con la Funci�n",
"ESTABLECIENDO CONEXION CON (%s",
"MALA OPCION CLIENTE-SERVIDOR: %s",
"CONECTADO CON RWNETCON (%s",
"ASIGNADA CONEXION POR RWNETCON:%s",
"CONECTADO CON:%s",
"ESPECIFIQUE UNIDAD o ENTRADA EN BLANCO,CON @direccion OTRO SERVIDOR",
"Preparando Instalacion ...",
"Preparando Instalacion ... Espere!",
"No se puede copiar el fichero %s ...",
"Inserte DISCO o SOPORTE Numero %d u otro que contenga %s",
"Preparando Instalacion ... Espere!",
"No se ejecuta:%s errno:%d.",
"SE ESTA RECONSTRUYENDO EL INDICE",
"      ESPERE, POR FAVOR",
"INDEXACION de %s",
"Total posibles registros:%7ld Incluyendo ya borrados",
"Registro actual:        ",
"PASE DE DATOS de %s",
"Total registros:%7ld",
"Registro actual:",
"Minutos restantes ESTIMADOS:",
"Fichero: ",
"Los DATOS necesitan un CAMBIO de VERSION!",
"La longitud del REGISTRO es MAYOR!",
"La longitud del REGISTRO es MENOR!",
"Long. Fichero = %lu  Long. DEF = %lu",
"Ha VARIADO el NUMERO DE CLAVES!",
"Claves Fichero = %lu  Claves DEF = %lu",
"Ha VARIADO alguna CLAVE!",
"Si se repite con este fichero, pongase  en  contacto",
"No debe continuar en la opcion,  pongase  en  contacto",
"con el servicio de mantenimiento que tenga contratado.",
"Suma campo numerico %d \n\r",
"f %d. accion ",
"Hay %d Paquetes Por Actualizar, Entre en la Opcion de Instalaciones",
"Relacion incorrecta %s->%s",
"-----> ENTRANDO EN MODIFICACION (Consulta) DE :[%s],[%s]",
"-----> SALIENDO DE MODIFICACION (Consulta) DE :[%s],[%s]",
"No dispone de Permiso para acceder a los datos:%s",
"ENTRANDO EN ALTA DE :[%s],[%s]",
"SALIENDO DE ALTA DE :[%s],[%s]",
"ENTRANDO EN MODIFICACION DE :[%s],[%s]",
"SALIENDO DE MODIFICACION DE :[%s],[%s]",
"ENTRANDO EN BAJA DE :[%s],[%s]",
"SALIENDO DE BAJA DE :[%s],[%s]",
"ENTRANDO EN IMPRIMIR DE :[%s],[%s]",
"SALIENDO DE IMPRIMIR DE :[%s],[%s]",
"TRACER ---> CALCULO %s NO ACCESIBLE",
"TRACER ---> INCLUYE %s NO ACCESIBLE",
"mapa de traza ilegal[%d][%d]",
"ENTRANDO EN EL TAB:[%s],[%s]",
"SALIENDO DEL TAB:[%s],[%s]",
"menu inexistente %s",
"algo va mal pues el trato con informes implica un programa activo",
"Impresora ....:",
"Fichero Spool :",
"Instalacion incorrecta (f.l.) value [%d] max [%d]",
"Instalacion incorrecta falta .prc [%s]",
"llamada directa erronea(mal enlace de rutina)",
"Error no hay programa_activo",
",Licencia:%06ld ",
"La estructura del fichero no coincide con los datos.",
"Entre su Codigo de Usuario:[          ]",
"Clave de Acceso[          ]",
"operacion letras con numerica es ilegal!!!",
"\n\rError trata el buffer.\n\r",
"No se pudo actualizar %s, Posibles runtimes en ejecucion",
"Actualizar %s -%s- (S/N)",
"LISTA de %s",
"Entre la CLAVE :",
"Pulse INTRO o entre nuevo origen:",
"Entre Origen de la Instalacion:",
"fichero ilegal[%d][%d]",
"Atencion al ipfi[%d]",
"PASA ALGO RARO CON EL IPFI[%d]",
"NO PUEDO RECUPERAR EL DEF!!![%s]",
"memoria temporal[%d]!=[%d]",
"el alloca a fallado[%d]",
"recursion no autorizada",
"ya no hay\n",
"PEDIDO [%u]",
"bad line (%d) in initialization file",
"Indentificador Desconocido (%s)",
"\n%d,1:Acceso a Empresa {{%s0 %s fich %s %s}}\n",
"%d,2:Definir Empresas {{%s0 %s fich %s NULL}}\n",
"Limitado [",
"]desde[",
"]hasta[",
"fichero no enlazado[%s]",
"memoria externa no enlazada[%s]",
"Actualizando %s.\n",
"Clave :",
"CAMPO (%d)%s ",
"*****************NO SE ACTUALIZA NADA!!.****************\n",
"*****************SE ACTUALIZAN %d CAMPOS.******************\n",
"Nueva ficha %s.\n",
"Clave :",
"Grabada ficha nueva ",
"Clave: ",
"Error al grabar nueva ",
"Clave: ",
"ACTUALIZACION NO BLOQUEADA!: ",
"Actualizada ficha ",
"Clave: ",
"Error al actualizar ",
"Clave: ",
"Error memo: %d \r\n",
"Pulse tecla",
"No hay entorno correcto en %s. Indique la ruta al llamar al programa",
" Entre su N�mero de Activaci�n ",
"IDENTIFICACION:",
"N�mero de ORO.:",
"Activaci�n....:",
"TELEFONOS PARA SOLICITAR CLAVE BASICA",
"902100177 / 965337743",
"Versi�n de pruebas, dispone de %d dias aproximadamente!",
"Dispone de %d dias aproximadamente!, Recuerde pedir la clave b�sica!!",
"Ultimo dia!!, VUELVA A ACCEDER Y PIDA LA CLAVE BASICA HOY!!",
"Instalacion Incorrecta o Sin Modulo de Proteccion Adecuado [%d]",
" NUMERO DE LICENCIA:%06lu ",
"El S.O. ha causado un error de proteccion general",
"DESEA CONTINUAR? [ ]",
"**NO CONTINUAR SI NO SE ESTA MUY SEGURO**",
"RECUPERADO SIGNAL %d",
"  PROCESO DETENIDO  ",
"  Return = Seguir   ",
"  Ctr-C = Abandonar ",
"CONFIGURACION ACTUAL DE LAS TECLAS ESPECIALES",
"FUNCION",
"TECLA",
"DESCRIPCION/PROGRAMACION",
"\007Veces:",
"NO HAY MEMORIA!!!!!!!",
"Busca:",
"Reemplaza:",
"Todos",
"Margen Izquierdo:",
"Margen Derecho:",
"Grabar al fichero:",
"Leer del fichero:",
" Automatico ",
" Manual ",
"AM",
"Pulse <Av.Pag.> para Lineas",
"",
"",
"",
"",
"",
"Pulse una tecla",
"\n\r ERROR EN ASIGNACION DE MEMORIA ...\n\r",
" NO HAY MEMORIA PARA OPERAR : OPERACION ABORTADA. \n\r",
"heapchecknode erroneo=[%d]",
"\n PUNTERO %lx ENCONTRADO EN FREE\n",
"\n FREE %lx ILEGAL \n",
"\n PUNTERO %lx ENCONTRADO EN MALLOC\n",
"\n\r voy a pedir para %d MAXI ASIGNADA %ld",
"\n\r ya he pedido para %d ",
"Listados Bloque %d",
"Listados Bloque %d",
"Aceptar opci�n con %s o �ndice,Abandonar %s,Seleccionar con Cursores.",
"Esta Instalacion requiere Diagram %d.%02d.%03d o superior",
"Desea Efectuar la Instalacion (S/N)? ",
"SE DEBE ACTUALIZAR EL HLP!\n",
"No hay servicio RWNETCON en (%s:%u)",
"Sin servicio!\r\n",
"No existe conexion a servidor en (%s:%u)",
"Bind Erroneo:%d.\r\n",
"Listen Fallido\r\n",
"Fallo en accept:%d.\r\n",
"DESCONECTADO: REALMENTE NO SOY UN SERVIDOR (NO TENGO LICENCIA)\r\n",
"SERVIDOR A %d.%d.%d.%d",
"DESCONECTADO: EL TERMINAL NO ACEPTA MI VERSION\r\n",
"Desconectando ...",
"DESCONECTADO: NO SE ACEPTA LA VERSION DE TERMINAL\r\n",
"non trobata[%ld] [%d][%d]",
"Pulse Tecla o Boton",
"No se puede comenzar el proceso de impresion [%d]",
"Funci�n%d Programada con %s",
"Funci�n %d (F%d)",
"Funci�n %d (Ctrl-F%d)",
"VALIDAR",
"ANTERIOR",
"SIGUIENTE",
"CANCELAR",
"LISTADO",
"RELACION",
"AVANCE PAGINA",
"RETROCEDER PAGINA",
"AYUDA",
"PROGRAMACION DE FUNCION",
"Pulse el bot�n izquierdo para seleccionar la opcion",
"Entre Descripcion Para la Funcion%d",
"Listados Bloque %d",
"Listados Bloque %d",
"Recibiendo ",
"CI[%d][%d]FICHERO ",
"Error [%d] en lectura de %s",
"ATENCION: ����FATAL!!!! UNIDAD O PARTICION LLENA [%d]",
"Error en posicionamiento de fichero, posible disco corrupto [%d]",
"COMPLETADO........",
"Entre la Direccion del Servidor:",
"Entre direccion de red del servidor:",
"Entre Origen de la Instalacion:",
" Desea Efectuar la Instalacion (S/N)? ",
"Entre Directorio Destino:",
"Pulse INTRO o entre nuevo origen:",
"POR FAVOR, REINICIALICE EL SISTEMA\r\n",
"Pulse tecla",
"MODO DEMOSTRACION",
"Es correcto (S/N)",
"ASEGURESE DE QUE NO HAYA NADIE USANDO ESTE FICHERO, �ABORTAR? ",
"Confirmacion baja (S/N) ..: ",
" Desea Continuar la Instalacion (S/N)? ",
" Desea Efectuar la Instalacion (S/N)? ",
"NO hay AYUDA para esta opci�n!, Desea editarla? ",
"Error en Impresora o sin papel �Reintentar? ",
"Desea Efectuar la Instalacion (S/N)? ",
"Desea Efectuar la Instalacion (S/N)? ",
"Desea Efectuar la Instalacion (S/N)? ",
" Desea Efectuar la Instalacion (S/N)? ",
" Desea Efectuar la Instalacion (S/N)? ",
" Desea Continuar la Instalacion (S/N)? ",
" Es mejor contestar N y reiniciar el sistema, Continuar (S/N)? ",
" Desea Continuar la Instalacion (S/N)? ",
" Desea Continuar la Instalacion (S/N)? ",
"N",/*447*/
"S",/*448*/
"SN",
"HAY PROGRAMAS EJECUTANDOSE!!,CON 'S' SE ANULARAN, MEJOR LO HAGA MANUALMENTE",
"n",/*451*/
"s",/*452*/
"No se pueden anular los otros programas!",
"BLOQUEADO",
" INEXSISTENTE!!",
" ALTERADO O INCORRECTO!!",
" INCORRECTO!!",
" ALTERADO!!",
"No limitado ",
"Domingo",
"Lunes",
"Martes",
"Miercoles",
"Jueves",
"Viernes",
"Sabado",
"Enero",
"Febrero",
"Marzo",
"Abril",
"Mayo",
"Junio",
"Julio",
"Agosto",
"Septiembre",
"Octubre",
"Noviembre",
"Diciembre",
"%02d de %s de %04d%c",
"AYUDA ",
"Preparando la ayuda de %s por primera vez ...",
"Actualizando la ayuda de %s ...",
"Grabar ficha",
" Modificacion ",
" Baja ",
"MB",
" Validar ",
" Clave ",
" Sig. ",
" Ant. ",
" Primera ",
" Ultima ",
" Modificar ",
" Imprime ",
"VCSAPUMI",
" Alta ",
" Consulta ",
" Modificacion ",
" Baja ",
" Imprimir ",
"ACMBI",
"Pulse <Av.Pag.> para Lineas",
"Pulse <Av.Pag.> para Siguiente P�gina",
"Pulse <Re.Pag.> para anterior P�gina",
",<Re.Pag.> para anterior P�gina",
"Pulse <Av.Pag.> para Siguiente P�gina",
"Leer ficha",
"Grabar ficha",
"Borrar ficha",
"SISTEMA DE FICHEROS INCORRECTO",
"No hay servicio dsKEY en (%s:%u)",
"NO HAY SOCKETS DISPONIBLES",
"FALLO EN INICIALIZACION DE LOS SOCKETS DE WINDOWS",
"Despues de editar vuelva a pedir la ayuda en la misma opcion",
"LA CONEXION CON EL SERVIDOR SE HA ROTO (EXCEPCION)!! REINTENTO EN 60 Segundos",
"Aviso de Control en pase BTRIEVE[%d][%d]",
"Acceso %d (%d tasks)",
"#0:MENU GENERAL\n",
"No puede acceder desde este puesto!",
"Ya hay un Super-Usuario en el sistema",
"Debe seleccionar una opcion, no un submenu",
"Fichero de passwords alterado!",
"Falta configuracion de superusuario",
"Ha habido un acceso a datos incorrectos",
"Configuraci�n erronea del ERP",
"Instalaci�n en progreso",
(char *)0,
};