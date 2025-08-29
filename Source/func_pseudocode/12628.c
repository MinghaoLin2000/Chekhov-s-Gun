-[TSUProgressUserInfoObject setProgress:]
void __cdecl -[TSUProgressUserInfoObject setProgress:](TSUProgressUserInfoObject *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_progress, a3);
}