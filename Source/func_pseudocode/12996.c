-[TSUDescription addFieldValue:]
void __cdecl -[TSUDescription addFieldValue:](TSUDescription *self, SEL a2, id a3)
{
  -[TSUDescription addFieldWithFormat:](self, "addFieldWithFormat:", CFSTR("%@"), a3);
}