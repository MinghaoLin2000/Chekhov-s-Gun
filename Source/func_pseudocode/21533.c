-[LSRConnection updateAudioDuration:]
void __cdecl -[LSRConnection updateAudioDuration:](LSRConnection *self, SEL a2, id a3)
{
  dispatch_queue_s *v4; // x20
  id v5; // x21
  unsigned __int64 v6; // x22
  double v7; // d1

  v4 = (dispatch_queue_s *)qword_100065418;
  v5 = objc_retain(a3);
  dispatch_assert_queue_V2(v4);
  LODWORD(v4) = (unsigned int)-[SFRequestParameters narrowband](self->_requestParameters, "narrowband");
  v6 = (unsigned __int64)objc_msgSend(v5, "length");
  objc_release(v5);
  v7 = 16000.0;
  if ( (_DWORD)v4 )
    v7 = 8000.0;
  self->_audioDuration = self->_audioDuration + (double)(v6 >> 1) / v7;
}