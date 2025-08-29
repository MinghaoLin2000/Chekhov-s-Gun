-[TSUProgressUserInfoObject setProgressObserver:]
void __cdecl -[TSUProgressUserInfoObject setProgressObserver:](TSUProgressUserInfoObject *self, SEL a2, id a3)
{
  objc_storeStrong(&self->_progressObserver, a3);
}