-[ModelKeyServerAPIFetchKeyResponse copyWithZone:]
id __cdecl -[ModelKeyServerAPIFetchKeyResponse copyWithZone:](
        ModelKeyServerAPIFetchKeyResponse *self,
        SEL a2,
        _NSZone *a3)
{
  _QWORD *v5; // x0
  _QWORD *v6; // x21
  id v7; // x0
  void *v8; // x8
  id v9; // x0
  void *v10; // x8

  v5 = objc_msgSend(objc_msgSend((id)objc_opt_class(self, a2), "allocWithZone:", a3), "init");
  v6 = v5;
  if ( (*(_BYTE *)&self->_has & 1) != 0 )
  {
    *((_DWORD *)v5 + 4) = self->_result;
    *((_BYTE *)v5 + 32) |= 1u;
  }
  v7 = -[ModelKeyServerAPIFetchKeyResult copyWithZone:](self->_success, "copyWithZone:", a3);
  v8 = (void *)v6[3];
  v6[3] = v7;
  objc_release(v8);
  v9 = -[ModelKeyServerAPIResultError copyWithZone:](self->_error, "copyWithZone:", a3);
  v10 = (void *)v6[1];
  v6[1] = v9;
  objc_release(v10);
  return v6;
}