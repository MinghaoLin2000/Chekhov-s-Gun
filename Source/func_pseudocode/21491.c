-[LSRConnection makeEuclidInstanceWithLocale:clientID:encoderType:initFlag:reply:]
void __cdecl -[LSRConnection makeEuclidInstanceWithLocale:clientID:encoderType:initFlag:reply:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5,
        signed __int64 a6,
        id a7)
{
  -[EARInterface makeEuclidInstanceWithLocale:clientID:encoderType:initFlag:reply:](
    self->_earInterface,
    "makeEuclidInstanceWithLocale:clientID:encoderType:initFlag:reply:",
    a3,
    a4,
    a5,
    a6,
    a7);
}