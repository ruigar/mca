#define MCA__MCCFINSERTERR	0X0BF3800A
#define MCA__MCCFDELETEERR	0X0BF38012
#define MCA__MCCFRENAMEERR	0X0BF3801A
#define MCA__MCCFUNLOCKERR	0X0BF38022
#define MCA__MCCFOPENERR	0X0BF3802A
#define MCA__MCCFGETLUERR	0X0BF38032
#define MCA__MCCFNOTFOUND	0X0BF3803A
#define MCA__MCCFRECLOCK	0X0BF38042
#define MCA__MCCFREWRITEERR	0X0BF3804A
#define MCA__MCCFDATALOST	0X0BF38052
#define MCA__MCCFSEQREADERR	0X0BF3805A
#define MCA__INVMCASPEC		0X0BF38062
#define MCA__INVPROTCODE	0X0BF3806A
#define MCA__CREMBXERR		0X0BF38072
#define MCA__CRELOGERR		0X0BF3807A
#define MCA__ASSIOCHLERR	0X0BF38082
#define MCA__MBXREADERR		0X0BF3808A
#define MCA__MBXWRITEERR	0X0BF38092
#define MCA__MBXWEOFERR		0X0BF3809A
#define MCA__MBXRCVERR		0X0BF380A2
#define MCA__MBXCLSERR		0X0BF380AA
#define MCA__PCBFULL		0X0BF380B2
#define MCA__ABORT		0X0BF380BA
#define MCA__NOSUCHDEV		0X0BF380C2
#define MCA__NOSUCHADC		0X0BF380CA
#define MCA__NOSUCHMUX		0X0BF380D2
#define MCA__DEFMDDERR		0X0BF380DA
#define MCA__NDCMPOPNERR	0X0BF380E2
#define MCA__GETOWNUICERR	0X0BF380EA
#define MCA__GETJPIERR		0X0BF380F2
#define MCA__CPERR		0X0BF380FA
#define MCA__ILLUIC		0X0BF38102
#define MCA__DUPLNAME		0X0BF3810A
#define MCA__INVPMCADEV		0X0BF38112
#define MCA__CHNNOTMATCH	0X0BF3811A
#define MCA__INVCHANNEL		0X0BF38122
#define MCA__NOPRIV		0X0BF3812A
#define MCA__INVCRECMD		0X0BF38132
#define MCA__RESTORERR		0X0BF3813A
#define MCA__DEVINUSE		0X0BF38142
#define MCA__OPNMCAERR		0X0BF3814A
#define MCA__INVRESP		0X0BF38152
#define MCA__DELMCAERR		0X0BF3815A
#define MCA__DELIMAGERR		0X0BF38162
#define MCA__CPDEVNOMATCH	0X0BF3816A
#define MCA__INVEXITFLAG	0X0BF38172
#define MCA__CANNOTWRITE	0X0BF38178
#define MCA__INVCHNDATA		0X0BF38182
#define MCA__CHNGRPNOTMATCH	0X0BF3818A
#define MCA__PROCESSDEAD	0X0BF38192
#define MCA__CANNOTREAD		0X0BF38198
#define MCA__CONFNOTOPEN	0X0BF381A2
#define MCA__CONFDESTROYED	0X0BF381AA
#define MCA__CONFINUSE		0X0BF381B2
#define MCA__NAMEMISS		0X0BF381BA
#define MCA__CONFOPEN		0X0BF381C2
#define MCA__ACQHMEMMAP		0X0BF381CA
#define MCA__ADCINACQ		0X0BF381D2
#define MCA__INVGROUP		0X0BF381DA
#define MCA__INSFACQMEM		0X0BF381E2
#define MCA__INVCPCMD		0X0BF381EA
#define MCA__INVGROUPS		0X0BF381F2
#define MCA__PTIMTOOBIG		0X0BF381FA
#define MCA__INVETIME		0X0BF38202
#define MCA__IDCNOTPRES		0X0BF3820A
#define MCA__IDCFAILED		0X0BF38212
#define MCA__DISPPARWRTERR	0X0BF3821A
#define MCA__DISPPARREADERR	0X0BF38222
#define MCA__INVDELAY		0X0BF3822A
#define MCA__INVCONFNAME	0X0BF38232
#define MCA__RGNNOTFOUND	0X0BF3823A
#define MCA__RGNLISTFULL	0X0BF38242
#define MCA__NTHNGDSPLYD	0X0BF3824A
#define MCA__INVALKEY		0X0BF38252
#define MCA__NOMOREADCS		0X0BF3825A
#define MCA__ACQON		0X0BF38263
#define MCA__ACQOFF		0X0BF3826B
#define MCA__INVPTOTAL		0X0BF38272
#define MCA__INVROWS		0X0BF3827A
#define MCA__INVACQMODE		0X0BF38282
#define MCA__NOT9900DISP	0X0BF3828A
#define MCA__AMBIGICON		0X0BF38292
#define MCA__INVALICON		0X0BF3829A
#define MCA__NOMOREGRPS		0X0BF382A2
#define MCA__INVALDSPFMT	0X0BF382AA
#define MCA__FILEACCERR		0X0BF382B2
#define MCA__INVRGNNUM		0X0BF382BA
#define MCA__INVADCTYPE		0X0BF382C2
#define MCA__NOFREENETADCS	0X0BF382CA
#define MCA__INVMUXNUM		0X0BF382D2
#define MCA__MUXINPINUSE	0X0BF382DA
#define MCA__MXNOTSETUPYET	0X0BF382E2
#define MCA__MUXSETUPERR	0X0BF382EA
#define MCA__INVNUMMUXINPUTS	0X0BF382F2
#define MCA__TOOMANYMUXDEV	0X0BF382FA
#define MCA__NONEXPMUXDEV	0X0BF38302
#define MCA__ADCGRPNOTALL	0X0BF3830A
#define MCA__INVDEVADDR		0X0BF38312
#define MCA__NOSUCHICBMODULE	0X0BF3831A
#define MCA__NOFREEICBSPOTS	0X0BF38322
#define MCA__INVICBREGNUM	0X0BF3832A
#define MCA__INVICBDEV		0X0BF38332
#define MCA__INVSCCDEV		0X0BF3833A
#define MCA__CHANGERSTUCK	0X0BF38340
#define MCA__ADCTABLEMAP	0X0BF3834A
#define MCA__NETTABLEMAP	0X0BF38352
#define MCA__ICBTABLEMAP	0X0BF3835A
#define MCA__SCSETUPERR		0X0BF38362
#define MCA__ADCSETUPERR	0X0BF3836A
#define MCA__AMPSETUPERR	0X0BF38372
#define MCA__LFCSETUPERR	0X0BF3837A
#define MCA__DSSSETUPERR	0X0BF38382
#define MCA__HVPSSETUPERR	0X0BF3838A
#define MCA__SCCONTROLERR	0X0BF38392
#define MCA__ADCCONTROLERR	0X0BF3839A
#define MCA__AMPCONTROLERR	0X0BF383A2
#define MCA__LFCCONTROLERR	0X0BF383AA
#define MCA__DSSCONTROLERR	0X0BF383B2
#define MCA__HVPSCONTROLERR	0X0BF383BA
#define MCA__DPCOMMERR		0X0BF383C2
#define MCA__CMDTOOBIG		0X0BF383CA
#define MCA__NOWKS		0X0BF383D2
#define MCA__ERRCREDISP		0X0BF383DA
#define MCA__NOMOREDISPS	0X0BF383E2