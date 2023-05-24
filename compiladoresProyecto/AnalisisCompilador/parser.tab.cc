// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "parser.tab.hh"


// Unqualified %code blocks.
#line 26 "parser.yy"

#include "driver.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <sstream>

#line 55 "parser.tab.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 6 "parser.yy"
namespace yy {
#line 148 "parser.tab.cc"

  /// Build a parser object.
  compilador_parser::compilador_parser (compilador_driver& driver_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      driver (driver_yyarg)
  {}

  compilador_parser::~compilador_parser ()
  {}

  compilador_parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  compilador_parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  compilador_parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  compilador_parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  compilador_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  compilador_parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  compilador_parser::symbol_kind_type
  compilador_parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  compilador_parser::stack_symbol_type::stack_symbol_type ()
  {}

  compilador_parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_REAL: // "dec"
        value.YY_MOVE_OR_COPY< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMERO: // "num"
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INICIO: // "inicio"
      case symbol_kind::S_ENTERO: // "entero"
      case symbol_kind::S_CARACTER: // "caracter"
      case symbol_kind::S_DECIMAL: // "decimal"
      case symbol_kind::S_FECHA: // "fecha"
      case symbol_kind::S_PROCEDIMIENTO: // "procedimiento"
      case symbol_kind::S_MOSTRAR: // "mostrar"
      case symbol_kind::S_ASIGNAR: // "asignar"
      case symbol_kind::S_SI: // "si"
      case symbol_kind::S_SINO: // "sino"
      case symbol_kind::S_HACER: // "hacer"
      case symbol_kind::S_MIENTRAS: // "mientras"
      case symbol_kind::S_PARA: // "para"
      case symbol_kind::S_RETORNAR: // "retornar"
      case symbol_kind::S_IDENTIFICADOR: // "id"
      case symbol_kind::S_DFECHA: // "fec"
      case symbol_kind::S_DCARACTER: // "car"
      case symbol_kind::S_TEXTO: // "texto"
      case symbol_kind::S_COMENTARIO: // "comentario"
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  compilador_parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_REAL: // "dec"
        value.move< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMERO: // "num"
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INICIO: // "inicio"
      case symbol_kind::S_ENTERO: // "entero"
      case symbol_kind::S_CARACTER: // "caracter"
      case symbol_kind::S_DECIMAL: // "decimal"
      case symbol_kind::S_FECHA: // "fecha"
      case symbol_kind::S_PROCEDIMIENTO: // "procedimiento"
      case symbol_kind::S_MOSTRAR: // "mostrar"
      case symbol_kind::S_ASIGNAR: // "asignar"
      case symbol_kind::S_SI: // "si"
      case symbol_kind::S_SINO: // "sino"
      case symbol_kind::S_HACER: // "hacer"
      case symbol_kind::S_MIENTRAS: // "mientras"
      case symbol_kind::S_PARA: // "para"
      case symbol_kind::S_RETORNAR: // "retornar"
      case symbol_kind::S_IDENTIFICADOR: // "id"
      case symbol_kind::S_DFECHA: // "fec"
      case symbol_kind::S_DCARACTER: // "car"
      case symbol_kind::S_TEXTO: // "texto"
      case symbol_kind::S_COMENTARIO: // "comentario"
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  compilador_parser::stack_symbol_type&
  compilador_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_REAL: // "dec"
        value.copy< float > (that.value);
        break;

      case symbol_kind::S_NUMERO: // "num"
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_INICIO: // "inicio"
      case symbol_kind::S_ENTERO: // "entero"
      case symbol_kind::S_CARACTER: // "caracter"
      case symbol_kind::S_DECIMAL: // "decimal"
      case symbol_kind::S_FECHA: // "fecha"
      case symbol_kind::S_PROCEDIMIENTO: // "procedimiento"
      case symbol_kind::S_MOSTRAR: // "mostrar"
      case symbol_kind::S_ASIGNAR: // "asignar"
      case symbol_kind::S_SI: // "si"
      case symbol_kind::S_SINO: // "sino"
      case symbol_kind::S_HACER: // "hacer"
      case symbol_kind::S_MIENTRAS: // "mientras"
      case symbol_kind::S_PARA: // "para"
      case symbol_kind::S_RETORNAR: // "retornar"
      case symbol_kind::S_IDENTIFICADOR: // "id"
      case symbol_kind::S_DFECHA: // "fec"
      case symbol_kind::S_DCARACTER: // "car"
      case symbol_kind::S_TEXTO: // "texto"
      case symbol_kind::S_COMENTARIO: // "comentario"
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  compilador_parser::stack_symbol_type&
  compilador_parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_REAL: // "dec"
        value.move< float > (that.value);
        break;

      case symbol_kind::S_NUMERO: // "num"
        value.move< int > (that.value);
        break;

      case symbol_kind::S_INICIO: // "inicio"
      case symbol_kind::S_ENTERO: // "entero"
      case symbol_kind::S_CARACTER: // "caracter"
      case symbol_kind::S_DECIMAL: // "decimal"
      case symbol_kind::S_FECHA: // "fecha"
      case symbol_kind::S_PROCEDIMIENTO: // "procedimiento"
      case symbol_kind::S_MOSTRAR: // "mostrar"
      case symbol_kind::S_ASIGNAR: // "asignar"
      case symbol_kind::S_SI: // "si"
      case symbol_kind::S_SINO: // "sino"
      case symbol_kind::S_HACER: // "hacer"
      case symbol_kind::S_MIENTRAS: // "mientras"
      case symbol_kind::S_PARA: // "para"
      case symbol_kind::S_RETORNAR: // "retornar"
      case symbol_kind::S_IDENTIFICADOR: // "id"
      case symbol_kind::S_DFECHA: // "fec"
      case symbol_kind::S_DCARACTER: // "car"
      case symbol_kind::S_TEXTO: // "texto"
      case symbol_kind::S_COMENTARIO: // "comentario"
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  compilador_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  compilador_parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        switch (yykind)
    {
      case symbol_kind::S_INICIO: // "inicio"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 419 "parser.tab.cc"
        break;

      case symbol_kind::S_ENTERO: // "entero"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 425 "parser.tab.cc"
        break;

      case symbol_kind::S_CARACTER: // "caracter"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 431 "parser.tab.cc"
        break;

      case symbol_kind::S_DECIMAL: // "decimal"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 437 "parser.tab.cc"
        break;

      case symbol_kind::S_FECHA: // "fecha"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 443 "parser.tab.cc"
        break;

      case symbol_kind::S_PROCEDIMIENTO: // "procedimiento"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 449 "parser.tab.cc"
        break;

      case symbol_kind::S_MOSTRAR: // "mostrar"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 455 "parser.tab.cc"
        break;

      case symbol_kind::S_ASIGNAR: // "asignar"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 461 "parser.tab.cc"
        break;

      case symbol_kind::S_SI: // "si"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 467 "parser.tab.cc"
        break;

      case symbol_kind::S_SINO: // "sino"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 473 "parser.tab.cc"
        break;

      case symbol_kind::S_HACER: // "hacer"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 479 "parser.tab.cc"
        break;

      case symbol_kind::S_MIENTRAS: // "mientras"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 485 "parser.tab.cc"
        break;

      case symbol_kind::S_PARA: // "para"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 491 "parser.tab.cc"
        break;

      case symbol_kind::S_RETORNAR: // "retornar"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 497 "parser.tab.cc"
        break;

      case symbol_kind::S_IDENTIFICADOR: // "id"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 503 "parser.tab.cc"
        break;

      case symbol_kind::S_NUMERO: // "num"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < int > (); }
#line 509 "parser.tab.cc"
        break;

      case symbol_kind::S_REAL: // "dec"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < float > (); }
#line 515 "parser.tab.cc"
        break;

      case symbol_kind::S_DFECHA: // "fec"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 521 "parser.tab.cc"
        break;

      case symbol_kind::S_DCARACTER: // "car"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 527 "parser.tab.cc"
        break;

      case symbol_kind::S_TEXTO: // "texto"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 533 "parser.tab.cc"
        break;

      case symbol_kind::S_COMENTARIO: // "comentario"
#line 98 "parser.yy"
                 { yyo << yysym.value.template as < std::string > (); }
#line 539 "parser.tab.cc"
        break;

      default:
        break;
    }
        yyo << ')';
      }
  }
#endif

  void
  compilador_parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  compilador_parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  compilador_parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  compilador_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  compilador_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  compilador_parser::debug_level_type
  compilador_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  compilador_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  compilador_parser::state_type
  compilador_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  compilador_parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  compilador_parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  compilador_parser::operator() ()
  {
    return parse ();
  }

  int
  compilador_parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_REAL: // "dec"
        yylhs.value.emplace< float > ();
        break;

      case symbol_kind::S_NUMERO: // "num"
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_INICIO: // "inicio"
      case symbol_kind::S_ENTERO: // "entero"
      case symbol_kind::S_CARACTER: // "caracter"
      case symbol_kind::S_DECIMAL: // "decimal"
      case symbol_kind::S_FECHA: // "fecha"
      case symbol_kind::S_PROCEDIMIENTO: // "procedimiento"
      case symbol_kind::S_MOSTRAR: // "mostrar"
      case symbol_kind::S_ASIGNAR: // "asignar"
      case symbol_kind::S_SI: // "si"
      case symbol_kind::S_SINO: // "sino"
      case symbol_kind::S_HACER: // "hacer"
      case symbol_kind::S_MIENTRAS: // "mientras"
      case symbol_kind::S_PARA: // "para"
      case symbol_kind::S_RETORNAR: // "retornar"
      case symbol_kind::S_IDENTIFICADOR: // "id"
      case symbol_kind::S_DFECHA: // "fec"
      case symbol_kind::S_DCARACTER: // "car"
      case symbol_kind::S_TEXTO: // "texto"
      case symbol_kind::S_COMENTARIO: // "comentario"
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {

#line 820 "parser.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  compilador_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  compilador_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  compilador_parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // compilador_parser::context.
  compilador_parser::context::context (const compilador_parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  compilador_parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  compilador_parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  compilador_parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char compilador_parser::yypact_ninf_ = -109;

  const signed char compilador_parser::yytable_ninf_ = -1;

  const short
  compilador_parser::yypact_[] =
  {
     249,    19,  -109,  -109,  -109,  -109,    14,    51,    53,  -109,
      22,    70,    86,  -109,    99,   102,   101,    17,   110,    17,
      24,    98,   112,  -109,   119,   113,   123,   124,   125,   129,
     127,   133,    35,     9,  -109,   134,  -109,  -109,   136,    24,
    -109,  -109,  -109,  -109,  -109,  -109,   154,  -109,   138,   150,
      24,   152,   156,    17,   213,    24,   213,    58,   213,    25,
     234,  -109,  -109,  -109,  -109,  -109,    50,    47,  -109,  -109,
     151,    35,    35,    68,   155,   191,  -109,   148,  -109,    17,
      24,   162,    24,   159,   142,    61,  -109,  -109,   185,   186,
      50,   166,   187,    77,   192,   195,   198,   208,  -109,  -109,
     213,   214,  -109,    35,   202,   204,   205,   209,   217,   217,
     217,   217,  -109,   219,   221,  -109,   222,   230,   169,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
     242,   191,   243,   235,   236,    35,   241,   244,   156,   156,
     247,   239,   248,   250,   189,   194,   108,   258,   255,   254,
    -109,   259,  -109,  -109,  -109,  -109,    47,    47,  -109,  -109,
      35,   257,  -109,    79,  -109,   260,   261,   191,  -109,   191,
    -109,  -109,   262,  -109,  -109,  -109,  -109,  -109,   264,   213,
     213,   213,  -109,   213,  -109,    24,  -109,   267,    24,   213,
    -109,  -109,  -109,   213,  -109,   230,  -109,  -109,  -109,   265,
    -109,  -109,  -109,  -109,   256,   213,   268,   269,  -109,  -109,
     273,   271,  -109,   272,   274,   275,    24,    24,  -109,   270,
     277,  -109,  -109
  };

  const signed char
  compilador_parser::yydefact_[] =
  {
       0,     0,    11,    12,    13,    14,     0,     0,     0,     8,
       0,     0,     0,     1,     0,     0,     0,    16,     0,    16,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,    53,    54,     0,    52,
      56,    57,    58,    59,    60,    61,    62,    63,    18,     0,
       0,     0,    24,     0,    24,     0,    24,     0,    24,     0,
      81,    42,    43,    79,    78,    80,    87,    36,    39,    40,
       0,    90,     0,    23,     0,     2,    51,     0,    97,     0,
       0,     0,     0,     0,     0,    27,    26,    25,    49,    50,
      33,     0,     0,     0,     0,     0,     0,     0,    93,    94,
      24,     0,    41,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    92,     0,    89,     0,     0,    24,    19,
       4,   100,    99,    98,   101,   102,   103,   104,    96,    17,
       0,     3,     0,     0,     0,    90,     0,     0,    24,    24,
       0,     0,     0,     0,    24,    24,     0,     0,     0,     0,
      44,     0,    84,    83,    82,    85,    34,    35,    37,    38,
       0,     0,    76,    23,    21,     0,    22,     6,     5,    10,
      29,    31,     0,    28,    30,    48,    47,    45,     0,    24,
      24,    24,    68,    24,    69,     0,    95,     0,     0,    24,
      86,    91,    88,    24,    77,     0,     7,     9,    32,     0,
      66,    67,    70,    71,     0,    24,     0,     0,    20,    46,
      64,     0,    72,     0,     0,     0,     0,     0,    73,     0,
       0,    74,    65
  };

  const short
  compilador_parser::yypgoto_[] =
  {
    -109,  -109,   -72,  -109,     1,   276,   200,   -52,  -108,   -46,
     -24,    -1,    15,   -40,   -65,   -29,   -39,  -109,  -109,   -54,
     -64,   -63,   -62,   -50,   -22,  -109,   -86,   132,  -109,  -109,
    -109,  -109,   153
  };

  const unsigned char
  compilador_parser::yydefgoto_[] =
  {
       0,     7,     8,     9,    35,    22,    23,    36,    74,    93,
      90,    67,    68,    69,    37,    91,    38,    39,    40,    94,
      41,    42,    43,    44,   113,    45,   114,   115,   100,    46,
      78,    47,   128
  };

  const unsigned char
  compilador_parser::yytable_[] =
  {
      76,    10,    96,   120,   101,    98,    89,    99,    66,   164,
      70,    81,   123,   124,   125,   126,    95,   151,    21,   102,
      21,     2,     3,     4,     5,   122,    71,   127,     2,     3,
       4,     5,    72,    26,    27,    28,    11,    29,    30,    31,
      32,   130,    58,   132,   102,    12,   149,    66,    66,   172,
     116,    13,    58,    15,    92,    33,    14,    61,    62,   168,
      59,    34,     2,     3,     4,     5,    60,    61,    62,    63,
      64,    65,   166,   110,   108,   109,    10,   111,   135,    66,
      21,   123,   124,   125,   126,   136,   137,   208,    16,    97,
     117,   118,    89,    89,   122,   196,   127,   197,   182,   184,
     142,   117,   193,    17,   143,   144,   145,   156,   157,   175,
     176,    66,     2,     3,     4,     5,    18,    26,    27,    19,
      20,    29,    30,    31,    32,   158,   159,   185,    24,    48,
      49,    51,    10,   200,   201,   202,    66,   203,    50,    97,
      52,    53,    54,   207,    56,   121,   204,   166,    55,   206,
      57,   211,     2,     3,     4,     5,    75,    26,    27,    58,
      79,    29,    30,    31,    32,    73,    77,   134,    10,    80,
      10,    82,   112,    58,    61,    62,   119,   219,   220,    97,
      83,    84,   131,   133,   140,   121,    58,    85,    61,    62,
      86,    87,    88,    83,    84,     2,     3,     4,     5,     6,
      85,    61,    62,    86,    87,   165,    58,   138,   139,   141,
     146,    58,   181,    83,    84,   147,   148,   183,    83,    84,
      85,    61,    62,    86,    87,    85,    61,    62,    86,    87,
      58,    72,   150,   152,    58,   153,   154,    83,    84,   161,
     155,   160,    59,   162,    85,    61,    62,    86,    87,    61,
      62,   103,     1,     2,     3,     4,     5,     6,   104,   105,
     106,   163,   167,   169,   107,   173,   170,   171,   177,   174,
     178,   179,   187,   180,   188,   189,   210,   190,   192,   129,
     198,   194,   199,   195,   205,   214,   209,   213,   212,   215,
     221,   216,   191,   217,     0,    25,   218,   222,     0,   186
  };

  const short
  compilador_parser::yycheck_[] =
  {
      39,     0,    56,    75,    58,    57,    52,    57,    32,   117,
      32,    50,    77,    77,    77,    77,    55,   103,    17,    59,
      19,     4,     5,     6,     7,    77,    17,    77,     4,     5,
       6,     7,    23,     9,    10,    11,    17,    13,    14,    15,
      16,    80,    17,    82,    84,    31,   100,    71,    72,   135,
      72,     0,    17,    31,    53,    31,     3,    32,    33,   131,
      25,    37,     4,     5,     6,     7,    31,    32,    33,    34,
      35,    36,   118,    26,    24,    25,    75,    30,    17,   103,
      79,   146,   146,   146,   146,    24,    25,   195,    18,    31,
      22,    23,   138,   139,   146,   167,   146,   169,   144,   145,
      23,    22,    23,    17,    27,    28,    29,   108,   109,   138,
     139,   135,     4,     5,     6,     7,    17,     9,    10,    17,
      19,    13,    14,    15,    16,   110,   111,    19,    18,    31,
      18,    18,   131,   179,   180,   181,   160,   183,    19,    31,
      17,    17,    17,   189,    17,    37,   185,   193,    19,   188,
      17,   205,     4,     5,     6,     7,    20,     9,    10,    17,
      22,    13,    14,    15,    16,    31,    12,    25,   167,    19,
     169,    19,    21,    17,    32,    33,    21,   216,   217,    31,
      24,    25,    20,    24,    18,    37,    17,    31,    32,    33,
      34,    35,    36,    24,    25,     4,     5,     6,     7,     8,
      31,    32,    33,    34,    35,    36,    17,    22,    22,    22,
      18,    17,    23,    24,    25,    20,    18,    23,    24,    25,
      31,    32,    33,    34,    35,    31,    32,    33,    34,    35,
      17,    23,    18,    31,    17,    31,    31,    24,    25,    18,
      31,    22,    25,    21,    31,    32,    33,    34,    35,    32,
      33,    17,     3,     4,     5,     6,     7,     8,    24,    25,
      26,    31,    20,    20,    30,    24,    31,    31,    21,    25,
      31,    23,    14,    23,    19,    21,    20,    18,    21,    79,
      18,    21,    18,    22,    17,    12,    21,    18,    20,    18,
      20,    19,   160,    19,    -1,    19,    21,    20,    -1,   146
  };

  const signed char
  compilador_parser::yystos_[] =
  {
       0,     3,     4,     5,     6,     7,     8,    39,    40,    41,
      42,    17,    31,     0,     3,    31,    18,    17,    17,    17,
      19,    42,    43,    44,    18,    43,     9,    10,    11,    13,
      14,    15,    16,    31,    37,    42,    45,    52,    54,    55,
      56,    58,    59,    60,    61,    63,    67,    69,    31,    18,
      19,    18,    17,    17,    17,    19,    17,    17,    17,    25,
      31,    32,    33,    34,    35,    36,    48,    49,    50,    51,
      62,    17,    23,    31,    46,    20,    54,    12,    68,    22,
      19,    54,    19,    24,    25,    31,    34,    35,    36,    47,
      48,    53,    42,    47,    57,    54,    57,    31,    45,    61,
      66,    57,    51,    17,    24,    25,    26,    30,    24,    25,
      26,    30,    21,    62,    64,    65,    62,    22,    23,    21,
      40,    37,    45,    52,    58,    59,    60,    61,    70,    44,
      54,    20,    54,    24,    25,    17,    24,    25,    22,    22,
      18,    22,    23,    27,    28,    29,    18,    20,    18,    57,
      18,    64,    31,    31,    31,    31,    49,    49,    50,    50,
      22,    18,    21,    31,    46,    36,    47,    20,    40,    20,
      31,    31,    64,    24,    25,    53,    53,    21,    31,    23,
      23,    23,    47,    23,    47,    19,    70,    14,    19,    21,
      18,    65,    21,    23,    21,    22,    40,    40,    18,    18,
      47,    47,    47,    47,    54,    17,    54,    47,    46,    21,
      20,    57,    20,    18,    12,    18,    19,    19,    21,    54,
      54,    20,    20
  };

  const signed char
  compilador_parser::yyr1_[] =
  {
       0,    38,    39,    39,    39,    39,    40,    40,    40,    41,
      41,    42,    42,    42,    42,    43,    43,    44,    44,    45,
      46,    46,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    48,    48,    49,    49,    49,
      50,    50,    51,    51,    51,    52,    52,    53,    53,    53,
      53,    54,    54,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    57,    57,    57,    57,
      57,    57,    58,    58,    59,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    64,
      64,    65,    65,    66,    66,    67,    68,    69,    70,    70,
      70,    70,    70,    70,    70
  };

  const signed char
  compilador_parser::yyr2_[] =
  {
       0,     2,     6,     7,     7,     8,     8,     9,     1,     9,
       8,     1,     1,     1,     1,     1,     0,     4,     2,     3,
       5,     3,     3,     1,     0,     1,     1,     1,     3,     3,
       3,     3,     4,     1,     3,     3,     1,     3,     3,     1,
       1,     2,     1,     1,     3,     5,     7,     3,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,    11,     4,     4,     3,     3,
       4,     4,     7,     9,    10,     3,     4,     5,     1,     1,
       1,     1,     3,     3,     3,     3,     4,     1,     5,     1,
       0,     3,     1,     1,     1,     5,     2,     2,     1,     1,
       1,     1,     1,     1,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const compilador_parser::yytname_[] =
  {
  "\"eof\"", "error", "\"invalid token\"", "\"inicio\"", "\"entero\"",
  "\"caracter\"", "\"decimal\"", "\"fecha\"", "\"procedimiento\"",
  "\"mostrar\"", "\"asignar\"", "\"si\"", "\"sino\"", "\"hacer\"",
  "\"mientras\"", "\"para\"", "\"retornar\"", "\"(\"", "\")\"", "\"{\"",
  "\"}\"", "\";\"", "\",\"", "\"=\"", "\"+\"", "\"-\"", "\"*\"", "\"!\"",
  "\"<\"", "\">\"", "\"/\"", "\"id\"", "\"num\"", "\"dec\"", "\"fec\"",
  "\"car\"", "\"texto\"", "\"comentario\"", "$accept", "I", "B", "F", "C",
  "D", "E", "R", "P", "G", "K", "H", "Q", "J", "L", "O", "M", "N", "S",
  "T", "U", "V", "W", "X", "Y", "Z", "AA", "AB", "AC", "AD", "AE", "AF",
  "AG", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const unsigned char
  compilador_parser::yyrline_[] =
  {
       0,   104,   104,   105,   106,   107,   109,   110,   111,   113,
     114,   116,   117,   118,   119,   121,   122,   125,   126,   128,
     130,   131,   132,   133,   135,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   145,   146,   147,   149,   150,   151,
     153,   154,   156,   157,   158,   160,   161,   163,   164,   165,
     166,   168,   169,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   183,   184,   187,   188,   189,   190,
     191,   192,   194,   195,   197,   199,   201,   202,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   215,   217,
     218,   221,   222,   224,   225,   227,   229,   231,   233,   234,
     235,   236,   237,   238,   239
  };

  void
  compilador_parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  compilador_parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 6 "parser.yy"
} // yy
#line 1448 "parser.tab.cc"

#line 242 "parser.yy"

string leerArchivo();


void yy::compilador_parser::error(const location_type& lugar, const std::string& lexema)
{
  
	string nombreArchivo = "FilaColumna.txt", fila, columna, cad = "";
	ofstream archivo;
 
	archivo.open(nombreArchivo.c_str(), fstream::out);
	archivo.clear();
	archivo << lugar;
	archivo.close();

	cad = leerArchivo();
	stringstream cc(cad);
	getline(cc, fila, '.');
	getline(cc, columna, '.');

	ofstream pagina;


	pagina.open("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\eSintactios.txt", ios::app);
 
	pagina << "<tr class= \"error\" >" << "<td>1</td>" << "<td>Error Sintactico</td>" << "<td>" << fila << "</td>"<< "<td>" << columna << "</td>" << "<td>" << lexema << "<td>" << "</tr>";
	pagina.close();
		  
}

string leerArchivo() {
	string cadena;
	ifstream datos("FilaColumna.txt");
	 
	if (datos.fail()) {
		cout << "Texto entrada Estructura.txt no existe" << endl;
	}
	else {
		while (!datos.eof()) {
		 
			getline(datos, cadena); //con esta funcion tomas la linea(limitada por \n)

		}
	}
	return cadena;
}
