-[TSPTemporaryObjectContextDelegate presentPersistenceError:]
void __cdecl -[TSPTemporaryObjectContextDelegate presentPersistenceError:](
        TSPTemporaryObjectContextDelegate *self,
        SEL a2,
        id a3)
{
  objc_storeStrong((id *)&self->_error, a3);
}