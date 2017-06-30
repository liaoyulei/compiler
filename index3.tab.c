/* A Bison parser, made from index3.y
   by GNU bison 1.35.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	IDENT	257
# define	NUM	258
# define	ASSIGNMENT_OPERATOR	259
# define	IF	260
# define	THEN	261
# define	ELSE	262
# define	WHILE	263
# define	DO	264
# define	READ	265
# define	WRITE	266
# define	CALL	267
# define	BEGIN	268
# define	END	269
# define	CONST	270
# define	VAR	271
# define	PROCEDURE	272
# define	ODD	273
# define	REPEAT	274
# define	UNTIL	275
# define	EQUAL	276
# define	NOTEQUAL	277
# define	LOW	278
# define	LOWEQUAL	279
# define	GREAT	280
# define	GREATEQUAL	281

#line 1 "index3.y"

	#include "index3.h"
	extern FILE *yyin;
	extern char *yytext;
	typedef struct symbol{
		char name[15],kind;
		int level,val,addr,previous;
	}symbol;
	symbol table[100005];
	int display[100005],sp=1,top=1,distop=1,level=-1,cdtop=0;
#ifndef YYSTYPE
# define YYSTYPE int
# define YYSTYPE_IS_TRIVIAL 1
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		153
#define	YYFLAG		-32768
#define	YYNTBASE	37

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 281 ? yytranslate[x] : 89)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    36,    30,    28,    34,    29,    32,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     3,     4,     5,     6,     7,    16,    17,    22,
      23,    27,    28,    33,    34,    35,    41,    42,    43,    48,
      49,    54,    55,    60,    62,    64,    66,    68,    70,    72,
      74,    76,    77,    82,    88,    89,    93,    97,   101,   105,
     109,   113,   117,   120,   121,   122,   130,   131,   134,   137,
     138,   143,   144,   149,   150,   151,   156,   157,   162,   165,
     166,   167,   172,   173,   178,   180,   182,   186,   187,   188,
     195,   198,   199,   206,   207,   208,   213,   214,   221,   222,
     223,   228,   229
};
static const short yyrhs[] =
{
      38,    32,     0,     0,     0,     0,     0,    39,    43,    40,
      47,    41,    51,    42,    54,     0,     0,    16,    45,    44,
      33,     0,     0,    34,    45,    44,     0,     0,     3,    46,
      22,     4,     0,     0,     0,    17,     3,    48,    49,    33,
       0,     0,     0,    34,     3,    50,    49,     0,     0,    52,
      38,    33,    51,     0,     0,    18,     3,    53,    33,     0,
      55,     0,    57,     0,    60,     0,    75,     0,    78,     0,
      79,     0,    83,     0,    87,     0,     0,     3,    56,     5,
      64,     0,    14,    54,    33,    58,    15,     0,     0,    54,
      33,    58,     0,    64,    22,    64,     0,    64,    23,    64,
       0,    64,    24,    64,     0,    64,    25,    64,     0,    64,
      26,    64,     0,    64,    27,    64,     0,    19,    64,     0,
       0,     0,     6,    59,    61,     7,    54,    62,    63,     0,
       0,     8,    54,     0,    70,    67,     0,     0,    28,    70,
      65,    67,     0,     0,    29,    70,    66,    67,     0,     0,
       0,    28,    70,    68,    67,     0,     0,    29,    70,    69,
      67,     0,    74,    71,     0,     0,     0,    30,    74,    72,
      71,     0,     0,    31,    74,    73,    71,     0,     3,     0,
       4,     0,    35,    64,    36,     0,     0,     0,     9,    76,
      59,    77,    10,    54,     0,    13,     3,     0,     0,    11,
      35,     3,    80,    81,    36,     0,     0,     0,    34,     3,
      82,    81,     0,     0,    12,    35,    64,    84,    85,    36,
       0,     0,     0,    34,    64,    86,    85,     0,     0,    20,
      88,    54,    33,    58,    21,    59,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,    17,    19,    19,    19,    19,    19,    21,    22,    24,
      25,    27,    27,    29,    30,    30,    32,    33,    33,    35,
      36,    38,    38,    40,    41,    42,    43,    44,    45,    46,
      47,    49,    49,    51,    53,    54,    56,    57,    58,    59,
      60,    61,    62,    64,    64,    64,    66,    67,    69,    70,
      70,    71,    71,    73,    74,    74,    75,    75,    77,    79,
      80,    80,    81,    81,    83,    84,    85,    87,    87,    87,
      89,    91,    91,    93,    94,    94,    96,    96,    98,    99,
      99,   101,   101
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "IDENT", "NUM", "ASSIGNMENT_OPERATOR", "IF", 
  "THEN", "ELSE", "WHILE", "DO", "READ", "WRITE", "CALL", "BEGIN", "END", 
  "CONST", "VAR", "PROCEDURE", "ODD", "REPEAT", "UNTIL", "EQUAL", 
  "NOTEQUAL", "LOW", "LOWEQUAL", "GREAT", "GREATEQUAL", "'+'", "'-'", 
  "'*'", "'/'", "'.'", "';'", "','", "'('", "')'", "START", "BLOCK", "@1", 
  "@2", "@3", "@4", "CONSTANT_DECLARATION", "TAIL_CONSTANT_DECLARATION", 
  "CONST_DEFINITION", "@5", "VARINAT_DECLARATION", "@6", 
  "TAIL_VARINAT_DECLARATION", "@7", "PROCEDURE_DECLARATION", 
  "PROCEDURE_HEADER", "@8", "STATEMENT", "ASSIGNMENT_STATEMENT", "@9", 
  "COMPOUND_STATEMENT", "TAIL_COMPOUND_STATEMENT", "CONDITION", 
  "CONDITIONAL_STATEMENT", "@10", "@11", "TAIL_CONDITIONAL_STATEMENT", 
  "EXPRESSION", "@12", "@13", "TAIL_EXPRESSION", "@14", "@15", "ITEM", 
  "TAIL_ITEM", "@16", "@17", "FACTOR", "LOOP_STATEMENT", "@18", "@19", 
  "PROCEDURE_CALL_STATEMENT", "READ_STATEMENT", "@20", 
  "TAIL_READ_STATEMENT", "@21", "WRITE_STATEMENT", "@22", 
  "TAIL_WRITE_STATEMENT", "@23", "REPEAT_STATEMENT", "@24", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,    37,    39,    40,    41,    42,    38,    43,    43,    44,
      44,    46,    45,    47,    48,    47,    49,    50,    49,    51,
      51,    53,    52,    54,    54,    54,    54,    54,    54,    54,
      54,    56,    55,    57,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    61,    62,    60,    63,    63,    64,    65,
      64,    66,    64,    67,    68,    67,    69,    67,    70,    71,
      72,    71,    73,    71,    74,    74,    74,    76,    77,    75,
      78,    80,    79,    81,    82,    81,    84,    83,    85,    86,
      85,    88,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     2,     0,     0,     0,     0,     8,     0,     4,     0,
       3,     0,     4,     0,     0,     5,     0,     0,     4,     0,
       4,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     5,     0,     3,     3,     3,     3,     3,
       3,     3,     2,     0,     0,     7,     0,     2,     2,     0,
       4,     0,     4,     0,     0,     4,     0,     4,     2,     0,
       0,     4,     0,     4,     1,     1,     3,     0,     0,     6,
       2,     0,     6,     0,     0,     4,     0,     6,     0,     0,
       4,     0,     7
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       2,     0,     7,     1,     0,     3,    11,     9,    13,     0,
       0,     0,     0,     4,     0,     9,     8,    14,    19,    12,
      10,    16,     0,     5,     2,     0,     0,    21,     0,     0,
      17,    15,     0,    31,     0,    67,     0,     0,     0,     0,
      81,     6,    23,    24,    25,    26,    27,    28,    29,    30,
      19,    16,    22,     0,    64,    65,     0,     0,     0,     0,
      43,     0,    53,    59,     0,     0,     0,    70,     0,     0,
      20,    18,     0,    42,    49,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,     0,    58,
      68,    71,    76,    34,     0,    32,    53,    53,    66,     0,
      36,    37,    38,    39,    40,    41,    54,    56,    60,    62,
       0,    73,    78,     0,     0,    34,    50,    52,    44,    53,
      53,    59,    59,     0,     0,     0,     0,     0,    34,    33,
       0,    46,    55,    57,    61,    63,    69,    74,    72,    79,
      77,    35,     0,     0,    45,    73,    78,    82,    47,    75,
      80,     0,     0,     0
};

static const short yydefgoto[] =
{
     151,     1,     2,     8,    18,    28,     5,    11,     7,     9,
      13,    21,    26,    51,    23,    24,    32,   113,    42,    53,
      43,   114,    60,    44,    77,   131,   144,    61,    96,    97,
      86,   119,   120,    62,    89,   121,   122,    63,    45,    64,
     110,    46,    47,   111,   125,   145,    48,   112,   127,   146,
      49,    69
};

static const short yypact[] =
{
  -32768,   -15,    14,-32768,    18,-32768,-32768,    17,    22,    36,
      18,    26,    57,-32768,    64,    17,-32768,-32768,    51,-32768,
  -32768,    39,    67,-32768,-32768,    71,    42,-32768,    41,    43,
  -32768,-32768,    44,-32768,     3,-32768,    45,    46,    75,    41,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
      51,    39,-32768,    77,-32768,-32768,     5,     0,     0,     5,
  -32768,    40,    -9,    15,     3,    80,     5,-32768,    52,    41,
  -32768,-32768,     5,-32768,-32768,-32768,    48,    79,     5,     5,
       5,     5,     5,     5,     0,     0,-32768,     0,     0,-32768,
  -32768,-32768,-32768,    41,    54,-32768,    -9,    -9,-32768,    41,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
      78,    55,    56,    58,    81,    41,-32768,-32768,-32768,    -9,
      -9,    15,    15,    41,    89,    61,     5,    62,    41,-32768,
      72,    86,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,     3,    41,-32768,    55,    56,-32768,-32768,-32768,
  -32768,    99,   100,-32768
};

static const short yypgoto[] =
{
  -32768,    82,-32768,-32768,-32768,-32768,-32768,    87,    91,-32768,
  -32768,-32768,    53,-32768,    59,-32768,-32768,   -28,-32768,-32768,
  -32768,  -105,   -63,-32768,-32768,-32768,-32768,   -54,-32768,-32768,
     -83,-32768,-32768,   -42,   -73,-32768,-32768,   -31,-32768,-32768,
  -32768,-32768,-32768,-32768,   -40,-32768,-32768,-32768,   -43,-32768,
  -32768,-32768
};


#define	YYLAST		115


static const short yytable[] =
{
      41,    90,    73,    54,    55,    76,    54,    55,    54,    55,
     130,    68,    92,   116,   117,    74,    75,     3,    95,    84,
      85,     6,    56,   141,   100,   101,   102,   103,   104,   105,
       4,    57,    58,    57,    58,    59,   132,   133,    59,    12,
      59,    94,   106,   107,    33,    87,    88,    34,   134,   135,
      35,    10,    36,    37,    38,    39,   108,   109,    14,    16,
      17,    40,    78,    79,    80,    81,    82,    83,    19,    22,
      27,   118,   139,    25,    30,    31,    50,    52,    67,   147,
      65,    66,    72,    91,    98,    93,    99,   115,   123,   124,
     126,   128,   137,   142,   143,   136,   129,   138,   140,   152,
     153,    15,    20,   150,    71,   149,    29,     0,     0,    70,
       0,     0,     0,     0,     0,   148
};

static const short yycheck[] =
{
      28,    64,    56,     3,     4,    59,     3,     4,     3,     4,
     115,    39,    66,    96,    97,    57,    58,    32,    72,    28,
      29,     3,    19,   128,    78,    79,    80,    81,    82,    83,
      16,    28,    29,    28,    29,    35,   119,   120,    35,    17,
      35,    69,    84,    85,     3,    30,    31,     6,   121,   122,
       9,    34,    11,    12,    13,    14,    87,    88,    22,    33,
       3,    20,    22,    23,    24,    25,    26,    27,     4,    18,
       3,    99,   126,    34,     3,    33,    33,    33,     3,   142,
      35,    35,     5,     3,    36,    33,     7,    33,    10,    34,
      34,    33,     3,    21,     8,   123,    15,    36,    36,     0,
       0,    10,    15,   146,    51,   145,    24,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,   143
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software
   Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 315 "bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn) {

case 2:
#line 19 "index3.y"
{mktable();yyvsp[0]=top-1;table[yyvsp[0]].addr=cdtop;emit(JMP,0);;
    break;}
case 3:
#line 19 "index3.y"
{yyvsp[-1]=top;;
    break;}
case 4:
#line 19 "index3.y"
{yyvsp[-2]=top;;
    break;}
case 5:
#line 19 "index3.y"
{table[yyvsp[-6]].val=cdtop;code[table[yyvsp[-6]].addr].a=cdtop;emit(INT,yyvsp[-4]-yyvsp[-5]+3);;
    break;}
case 6:
#line 19 "index3.y"
{emit(OPR,0);rmtable();;
    break;}
case 11:
#line 27 "index3.y"
{insert(yytext,'c');;
    break;}
case 12:
#line 27 "index3.y"
{table[top-1].val=yylval;;
    break;}
case 14:
#line 30 "index3.y"
{insert(yytext,'v');;
    break;}
case 17:
#line 33 "index3.y"
{insert(yytext,'v');;
    break;}
case 21:
#line 38 "index3.y"
{insert(yytext,'p');;
    break;}
case 31:
#line 49 "index3.y"
{yyvsp[0]=lookup(yytext);;
    break;}
case 32:
#line 49 "index3.y"
{emit(STO,yyvsp[-3]);;
    break;}
case 36:
#line 56 "index3.y"
{emit(OPR,8);;
    break;}
case 37:
#line 57 "index3.y"
{emit(OPR,9);;
    break;}
case 38:
#line 58 "index3.y"
{emit(OPR,10);;
    break;}
case 39:
#line 59 "index3.y"
{emit(OPR,13);;
    break;}
case 40:
#line 60 "index3.y"
{emit(OPR,12);;
    break;}
case 41:
#line 61 "index3.y"
{emit(OPR,11);;
    break;}
case 42:
#line 62 "index3.y"
{emit(OPR,6);;
    break;}
case 43:
#line 64 "index3.y"
{yyvsp[0]=cdtop;emit(JPC,0);;
    break;}
case 44:
#line 64 "index3.y"
{yyvsp[-1]=cdtop;emit(JMP,0);code[yyvsp[-3]].a=cdtop;;
    break;}
case 45:
#line 64 "index3.y"
{code[yyvsp[-3]].a=cdtop;;
    break;}
case 49:
#line 70 "index3.y"
{emit(OPR,2);;
    break;}
case 51:
#line 71 "index3.y"
{emit(OPR,3);;
    break;}
case 54:
#line 74 "index3.y"
{emit(OPR,2);;
    break;}
case 56:
#line 75 "index3.y"
{emit(OPR,3);;
    break;}
case 60:
#line 80 "index3.y"
{emit(OPR,4);;
    break;}
case 62:
#line 81 "index3.y"
{emit(OPR,5);;
    break;}
case 64:
#line 83 "index3.y"
{yyvsp[0]=lookup(yytext);emit(LOD,yyvsp[0]);;
    break;}
case 65:
#line 84 "index3.y"
{emit(LIT,yylval);;
    break;}
case 67:
#line 87 "index3.y"
{yyvsp[0]=cdtop;;
    break;}
case 68:
#line 87 "index3.y"
{yyvsp[-1]=cdtop;emit(JPC,0);;
    break;}
case 69:
#line 87 "index3.y"
{emit(JMP,yyvsp[-5]);code[yyvsp[-4]].a=cdtop;;
    break;}
case 70:
#line 89 "index3.y"
{yyvsp[0]=lookup(yytext);emit(CAL,yyvsp[0]);;
    break;}
case 71:
#line 91 "index3.y"
{yyvsp[0]=lookup(yytext);emit(OPR,16);emit(STO,yyvsp[0]);;
    break;}
case 74:
#line 94 "index3.y"
{yyvsp[0]=lookup(yytext);emit(OPR,16);emit(STO,yyvsp[0]);;
    break;}
case 76:
#line 96 "index3.y"
{emit(OPR,14);emit(OPR,15);;
    break;}
case 79:
#line 99 "index3.y"
{emit(OPR,14);emit(OPR,15);;
    break;}
case 81:
#line 101 "index3.y"
{yyvsp[0]=cdtop;;
    break;}
case 82:
#line 101 "index3.y"
{emit(JPC,yyvsp[-6]);;
    break;}
}

#line 705 "bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
yyerrhandle:
  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 103 "index3.y"

void mktable(){
	display[distop++]=top;
	++level;
	sp=top;
}
void rmtable(){
	top=display[--distop];
	--level;
	if(level>=0){
		sp=display[distop-1];
		for(;table[sp].kind=='c';++sp);
	}
}
void insert(char *s,char c){
	int i;
	for(i=display[distop-1];i<top;++i){
		if(!strcmp(table[i].name,s)){
			printf("%s has been declared.\n",s);
			exit(0);
		}
	}
	strcpy(table[top].name,s);
	table[top].kind=c;
	table[top].level=level;
	table[top].addr=top-sp;
	table[top].previous=0;
	if(c=='c'){
		++sp;
	}
	if(top>display[distop-1]){
		table[top-1].previous=top;
	}
	++top;
}
int lookup(char *s){
	int i,j;
	for(i=distop-1;i;--i){
		for(j=display[i];j;j=table[j].previous){
			if(!strcmp(table[j].name,s)){
				return j;
			}
		}
	}
	printf("%s has't been declared.\n",s);
	exit(0);
}
void emit(int f,int x){
	switch(f){
		case LOD:
			if(table[x].kind=='c'){
				code[cdtop].f=LIT;
				code[cdtop].l=0;
				code[cdtop].a=table[x].val;
			}
			else if(table[x].kind=='v'){
				code[cdtop].f=f;
				code[cdtop].l=level-table[x].level;
				code[cdtop].a=table[x].addr+3;
			}
			else{
				printf("%s isn't a constant or varinat\n",table[x].name);
				exit(0);
			}
			break;
		case STO:
			if(table[x].kind!='v'){
				printf("%s isn't a varinat\n",table[x].name);
				exit(0);
			}
			else{
				code[cdtop].f=f;
				code[cdtop].l=level-table[x].level;
				code[cdtop].a=table[x].addr+3;
			}
			break;
		case CAL:
			if(table[x].kind!='p'){
				printf("%s isn't a procedure\n",table[x].name);
				exit(0);
			}
			else{
				code[cdtop].f=f;
				code[cdtop].l=level-table[x].level;
				code[cdtop].a=table[x].val;
			}
			break;
		default:
			code[cdtop].f=f;
			code[cdtop].l=0;
			code[cdtop].a=x;
			break;
	}
	++cdtop;
}
int main(int argc,char *argv[]){
	int i;
	FILE *file;
	switch(argc){
		case 1:
			file=fopen("test.frag","r");
            if(!file){
                printf("Default file is not found\n");
                exit(1);
            }
            else{
                yyin=file;
            }
            break;
		case 2:
			file=fopen(argv[1],"r");
			if(!file){
				printf("FILE %s is not found\n",argv[1]);
				exit(1);
			}
			else{
				yyin=file;
				break;
			}
		default:
			printf("useage:flex [filename]\n");
			exit(1);
	}
	yyin=file;
	yyparse();
	fclose(file);
	for(i=0;code[i].f;++i){
		printf("(%d): ",i);
		switch(code[i].f){
			case LIT:printf("LIT");break;
			case OPR:printf("OPR");break;
			case LOD:printf("LOD");break;
			case STO:printf("STO");break;
			case CAL:printf("CAL");break;
			case INT:printf("INT");break;
			case JMP:printf("JMP");break;
			case JPC:printf("JPC");break;
		}
		printf(" %d %d\n",code[i].l,code[i].a);
	}
	printf("\n");
	interpret();
	return 0;
}
int yyerror (char *s) {
	printf ("%s: %s\n", s,yytext);
	return -1;
}