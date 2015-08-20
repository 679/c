
;; Function main (main, funcdef_no=24, decl_uid=2381, cgraph_uid=24)

main ()
{
  int i;
  int D.2387;
  int D.2386;
  int i.0;

  i = 1;
  i.0 = i;
  i = i.0 + 1;
  D.2386 = i.0 + 1;
  i = D.2386 * 2;
  printf ("i : %d\n", i);
  D.2387 = 0;
  goto <D.2388>;
  <D.2388>:
  return D.2387;
}



;; Function printf (<unset-asm-name>, funcdef_no=15, decl_uid=758, cgraph_uid=15)

printf (const char * restrict __fmt)
{
  int D.2389;

  D.2389 = __printf_chk (1, __fmt, __builtin_va_arg_pack ());
  goto <D.2390>;
  <D.2390>:
  return D.2389;
}


