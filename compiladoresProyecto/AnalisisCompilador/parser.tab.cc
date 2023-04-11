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
#line 25 "parser.yy"

#include "driver.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <cstdio>
 
#include <string.h>
#include <fstream>

using namespace std;

#line 51 "parser.tab.cc"


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
#line 144 "parser.tab.cc"

	/// Build a parser object.
	compilador_parser::compilador_parser(compilador_driver& driver_yyarg)
#if YYDEBUG
		: yydebug_(false),
		yycdebug_(&std::cerr),
#else
		:
#endif
		driver(driver_yyarg)
	{}

	compilador_parser::~compilador_parser()
	{}

	compilador_parser::syntax_error::~syntax_error() YY_NOEXCEPT YY_NOTHROW
	{}

	/*---------.
	| symbol.  |
	`---------*/



	// by_state.
	compilador_parser::by_state::by_state() YY_NOEXCEPT
		: state(empty_state)
	{}

	compilador_parser::by_state::by_state(const by_state& that) YY_NOEXCEPT
		: state(that.state)
	{}

	void
		compilador_parser::by_state::clear() YY_NOEXCEPT
	{
		state = empty_state;
	}

	void
		compilador_parser::by_state::move(by_state& that)
	{
		state = that.state;
		that.clear();
	}

	compilador_parser::by_state::by_state(state_type s) YY_NOEXCEPT
		: state(s)
	{}

	compilador_parser::symbol_kind_type
		compilador_parser::by_state::kind() const YY_NOEXCEPT
	{
		if (state == empty_state)
			return symbol_kind::S_YYEMPTY;
		else
			return YY_CAST(symbol_kind_type, yystos_[+state]);
	}

	compilador_parser::stack_symbol_type::stack_symbol_type()
	{}

	compilador_parser::stack_symbol_type::stack_symbol_type(YY_RVREF(stack_symbol_type) that)
		: super_type(YY_MOVE(that.state), YY_MOVE(that.location))
	{
		switch (that.kind())
		{
		case symbol_kind::S_REAL: // "dec"
			value.YY_MOVE_OR_COPY< float >(YY_MOVE(that.value));
			break;

		case symbol_kind::S_NUMERO: // "num"
			value.YY_MOVE_OR_COPY< int >(YY_MOVE(that.value));
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
			value.YY_MOVE_OR_COPY< std::string >(YY_MOVE(that.value));
			break;

		default:
			break;
		}

#if 201103L <= YY_CPLUSPLUS
		// that is emptied.
		that.state = empty_state;
#endif
	}

	compilador_parser::stack_symbol_type::stack_symbol_type(state_type s, YY_MOVE_REF(symbol_type) that)
		: super_type(s, YY_MOVE(that.location))
	{
		switch (that.kind())
		{
		case symbol_kind::S_REAL: // "dec"
			value.move< float >(YY_MOVE(that.value));
			break;

		case symbol_kind::S_NUMERO: // "num"
			value.move< int >(YY_MOVE(that.value));
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
			value.move< std::string >(YY_MOVE(that.value));
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
		switch (that.kind())
		{
		case symbol_kind::S_REAL: // "dec"
			value.copy< float >(that.value);
			break;

		case symbol_kind::S_NUMERO: // "num"
			value.copy< int >(that.value);
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
			value.copy< std::string >(that.value);
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
		switch (that.kind())
		{
		case symbol_kind::S_REAL: // "dec"
			value.move< float >(that.value);
			break;

		case symbol_kind::S_NUMERO: // "num"
			value.move< int >(that.value);
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
			value.move< std::string >(that.value);
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
		compilador_parser::yy_destroy_(const char* yymsg, basic_symbol<Base>& yysym) const
	{
		if (yymsg)
			YY_SYMBOL_PRINT(yymsg, yysym);
	}

#if YYDEBUG
	template <typename Base>
	void
		compilador_parser::yy_print_(std::ostream& yyo, const basic_symbol<Base>& yysym) const
	{
		std::ostream& yyoutput = yyo;
		YY_USE(yyoutput);
		if (yysym.empty())
			yyo << "empty symbol";
		else
		{
			symbol_kind_type yykind = yysym.kind();
			yyo << (yykind < YYNTOKENS ? "token" : "nterm")
				<< ' ' << yysym.name() << " ("
				<< yysym.location << ": ";
			switch (yykind)
			{
			case symbol_kind::S_INICIO: // "inicio"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 415 "parser.tab.cc"
			break;

			case symbol_kind::S_ENTERO: // "entero"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 421 "parser.tab.cc"
			break;

			case symbol_kind::S_CARACTER: // "caracter"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 427 "parser.tab.cc"
			break;

			case symbol_kind::S_DECIMAL: // "decimal"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 433 "parser.tab.cc"
			break;

			case symbol_kind::S_FECHA: // "fecha"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 439 "parser.tab.cc"
			break;

			case symbol_kind::S_PROCEDIMIENTO: // "procedimiento"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 445 "parser.tab.cc"
			break;

			case symbol_kind::S_MOSTRAR: // "mostrar"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 451 "parser.tab.cc"
			break;

			case symbol_kind::S_ASIGNAR: // "asignar"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 457 "parser.tab.cc"
			break;

			case symbol_kind::S_SI: // "si"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 463 "parser.tab.cc"
			break;

			case symbol_kind::S_SINO: // "sino"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 469 "parser.tab.cc"
			break;

			case symbol_kind::S_HACER: // "hacer"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 475 "parser.tab.cc"
			break;

			case symbol_kind::S_MIENTRAS: // "mientras"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 481 "parser.tab.cc"
			break;

			case symbol_kind::S_PARA: // "para"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 487 "parser.tab.cc"
			break;

			case symbol_kind::S_RETORNAR: // "retornar"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 493 "parser.tab.cc"
			break;

			case symbol_kind::S_IDENTIFICADOR: // "id"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 499 "parser.tab.cc"
			break;

			case symbol_kind::S_NUMERO: // "num"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < int >(); }
#line 505 "parser.tab.cc"
			break;

			case symbol_kind::S_REAL: // "dec"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < float >(); }
#line 511 "parser.tab.cc"
			break;

			case symbol_kind::S_DFECHA: // "fec"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 517 "parser.tab.cc"
			break;

			case symbol_kind::S_DCARACTER: // "car"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 523 "parser.tab.cc"
			break;

			case symbol_kind::S_TEXTO: // "texto"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 529 "parser.tab.cc"
			break;

			case symbol_kind::S_COMENTARIO: // "comentario"
#line 93 "parser.yy"
			{ yyoutput << yysym.value.template as < std::string >(); }
#line 535 "parser.tab.cc"
			break;

			default:
				break;
			}
			yyo << ')';
		}
	}
#endif

	void
		compilador_parser::yypush_(const char* m, YY_MOVE_REF(stack_symbol_type) sym)
	{
		if (m)
			YY_SYMBOL_PRINT(m, sym);
		yystack_.push(YY_MOVE(sym));
	}

	void
		compilador_parser::yypush_(const char* m, state_type s, YY_MOVE_REF(symbol_type) sym)
	{
#if 201103L <= YY_CPLUSPLUS
		yypush_(m, stack_symbol_type(s, std::move(sym)));
#else
		stack_symbol_type ss(s, sym);
		yypush_(m, ss);
#endif
	}

	void
		compilador_parser::yypop_(int n) YY_NOEXCEPT
	{
		yystack_.pop(n);
	}

#if YYDEBUG
	std::ostream&
		compilador_parser::debug_stream() const
	{
		return *yycdebug_;
	}

	void
		compilador_parser::set_debug_stream(std::ostream& o)
	{
		yycdebug_ = &o;
	}


	compilador_parser::debug_level_type
		compilador_parser::debug_level() const
	{
		return yydebug_;
	}

	void
		compilador_parser::set_debug_level(debug_level_type l)
	{
		yydebug_ = l;
	}
#endif // YYDEBUG

	compilador_parser::state_type
		compilador_parser::yy_lr_goto_state_(state_type yystate, int yysym)
	{
		int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
		if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
			return yytable_[yyr];
		else
			return yydefgoto_[yysym - YYNTOKENS];
	}

	bool
		compilador_parser::yy_pact_value_is_default_(int yyvalue) YY_NOEXCEPT
	{
		return yyvalue == yypact_ninf_;
	}

	bool
		compilador_parser::yy_table_value_is_error_(int yyvalue) YY_NOEXCEPT
	{
		return yyvalue == yytable_ninf_;
	}

	int
		compilador_parser::operator() ()
	{
		return parse();
	}

	int
		compilador_parser::parse()
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
			yystack_.clear();
			yypush_(YY_NULLPTR, 0, YY_MOVE(yyla));

			/*-----------------------------------------------.
			| yynewstate -- push a new symbol on the stack.  |
			`-----------------------------------------------*/
		yynewstate:
			YYCDEBUG << "Entering state " << int(yystack_[0].state) << '\n';
			YY_STACK_PRINT();

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
			if (yy_pact_value_is_default_(yyn))
				goto yydefault;

			// Read a lookahead token.
			if (yyla.empty())
			{
				YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
				try
#endif // YY_EXCEPTIONS
				{
					symbol_type yylookahead(yylex(driver));
					yyla.move(yylookahead);
				}
#if YY_EXCEPTIONS
				catch (const syntax_error& yyexc)
				{
					YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
					error(yyexc);
					goto yyerrlab1;
				}
#endif // YY_EXCEPTIONS
			}
			YY_SYMBOL_PRINT("Next token is", yyla);

			if (yyla.kind() == symbol_kind::S_YYerror)
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
			yyn += yyla.kind();
			if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind())
			{
				goto yydefault;
			}

			// Reduce or error.
			yyn = yytable_[yyn];
			if (yyn <= 0)
			{
				if (yy_table_value_is_error_(yyn))
					goto yyerrlab;
				yyn = -yyn;
				goto yyreduce;
			}

			// Count tokens shifted since error; after three, turn off error status.
			if (yyerrstatus_)
				--yyerrstatus_;

			// Shift the lookahead token.
			yypush_("Shifting", state_type(yyn), YY_MOVE(yyla));
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
				yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
				/* Variants are always initialized to an empty instance of the
				   correct type. The default '$$ = $1' action is NOT applied
				   when using variants.  */
				switch (yyr1_[yyn])
				{
				case symbol_kind::S_REAL: // "dec"
					yylhs.value.emplace< float >();
					break;

				case symbol_kind::S_NUMERO: // "num"
					yylhs.value.emplace< int >();
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
					yylhs.value.emplace< std::string >();
					break;

				default:
					break;
				}


				// Default location.
				{
					stack_type::slice range(yystack_, yylen);
					YYLLOC_DEFAULT(yylhs.location, range, yylen);
					yyerror_range[1].location = yylhs.location;
				}

				// Perform the reduction.
				YY_REDUCE_PRINT(yyn);
#if YY_EXCEPTIONS
				try
#endif // YY_EXCEPTIONS
				{
					switch (yyn)
					{

#line 816 "parser.tab.cc"

					default:
						break;
					}
				}
#if YY_EXCEPTIONS
				catch (const syntax_error& yyexc)
				{
					YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
					error(yyexc);
					YYERROR;
				}
#endif // YY_EXCEPTIONS
				YY_SYMBOL_PRINT("-> $$ =", yylhs);
				yypop_(yylen);
				yylen = 0;

				// Shift the result of the reduction.
				yypush_(YY_NULLPTR, YY_MOVE(yylhs));
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
				context yyctx(*this, yyla);
				std::string msg = yysyntax_error_(yyctx);
				error(yyla.location, YY_MOVE(msg));
			}


			yyerror_range[1].location = yyla.location;
			if (yyerrstatus_ == 3)
			{
				/* If just tried and failed to reuse lookahead token after an
				   error, discard it.  */

				   // Return failure if at end of input.
				if (yyla.kind() == symbol_kind::S_YYEOF)
					YYABORT;
				else if (!yyla.empty())
				{
					yy_destroy_("Error: discarding", yyla);
					yyla.clear();
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
			yypop_(yylen);
			yylen = 0;
			YY_STACK_PRINT();
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
				if (!yy_pact_value_is_default_(yyn))
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
				if (yystack_.size() == 1)
					YYABORT;

				yyerror_range[1].location = yystack_[0].location;
				yy_destroy_("Error: popping", yystack_[0]);
				yypop_();
				YY_STACK_PRINT();
			}
			{
				stack_symbol_type error_token;

				yyerror_range[2].location = yyla.location;
				YYLLOC_DEFAULT(error_token.location, yyerror_range, 2);

				// Shift the error token.
				error_token.state = state_type(yyn);
				yypush_("Shifting", YY_MOVE(error_token));
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
			if (!yyla.empty())
				yy_destroy_("Cleanup: discarding lookahead", yyla);

			/* Do not reclaim the symbols of the rule whose action triggered
			   this YYABORT or YYACCEPT.  */
			yypop_(yylen);
			YY_STACK_PRINT();
			while (1 < yystack_.size())
			{
				yy_destroy_("Cleanup: popping", yystack_[0]);
				yypop_();
			}

			return yyresult;
		}
#if YY_EXCEPTIONS
		catch (...)
		{
			YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
			// Do not try to display the values of the reclaimed symbols,
			// as their printers might throw an exception.
			if (!yyla.empty())
				yy_destroy_(YY_NULLPTR, yyla);

			while (1 < yystack_.size())
			{
				yy_destroy_(YY_NULLPTR, yystack_[0]);
				yypop_();
			}
			throw;
		}
#endif // YY_EXCEPTIONS
	}

	void
		compilador_parser::error(const syntax_error& yyexc)
	{
		error(yyexc.location, yyexc.what());
	}

	/* Return YYSTR after stripping away unnecessary quotes and
	   backslashes, so that it's suitable for yyerror.  The heuristic is
	   that double-quoting is unnecessary unless the string contains an
	   apostrophe, a comma, or backslash (other than backslash-backslash).
	   YYSTR is taken from yytname.  */
	std::string
		compilador_parser::yytnamerr_(const char* yystr)
	{
		if (*yystr == '"')
		{
			std::string yyr;
			char const* yyp = yystr;

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
		do_not_strip_quotes:;
		}

		return yystr;
	}

	std::string
		compilador_parser::symbol_name(symbol_kind_type yysymbol)
	{
		return yytnamerr_(yytname_[yysymbol]);
	}



	// compilador_parser::context.
	compilador_parser::context::context(const compilador_parser& yyparser, const symbol_type& yyla)
		: yyparser_(yyparser)
		, yyla_(yyla)
	{}

	int
		compilador_parser::context::expected_tokens(symbol_kind_type yyarg[], int yyargn) const
	{
		// Actual number of expected tokens
		int yycount = 0;

		const int yyn = yypact_[+yyparser_.yystack_[0].state];
		if (!yy_pact_value_is_default_(yyn))
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
					&& !yy_table_value_is_error_(yytable_[yyx + yyn]))
				{
					if (!yyarg)
						++yycount;
					else if (yycount == yyargn)
						return 0;
					else
						yyarg[yycount++] = YY_CAST(symbol_kind_type, yyx);
				}
		}

		if (yyarg && yycount == 0 && 0 < yyargn)
			yyarg[0] = symbol_kind::S_YYEMPTY;
		return yycount;
	}






	int
		compilador_parser::yy_syntax_error_arguments_(const context& yyctx,
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

		if (!yyctx.lookahead().empty())
		{
			if (yyarg)
				yyarg[0] = yyctx.token();
			int yyn = yyctx.expected_tokens(yyarg ? yyarg + 1 : yyarg, yyargn - 1);
			return yyn + 1;
		}
		return 0;
	}

	// Generate an error message.
	std::string
		compilador_parser::yysyntax_error_(const context& yyctx) const
	{
		// Its maximum.
		enum { YYARGS_MAX = 5 };
		// Arguments of yyformat.
		symbol_kind_type yyarg[YYARGS_MAX];
		int yycount = yy_syntax_error_arguments_(yyctx, yyarg, YYARGS_MAX);

		char const* yyformat = YY_NULLPTR;
		switch (yycount)
		{
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
		default: // Avoid compiler warnings.
			YYCASE_(0, YY_("syntax error"));
			YYCASE_(1, YY_("syntax error, unexpected %s"));
			YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
			YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
			YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
			YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
		}

		std::string yyres;
		// Argument number.
		std::ptrdiff_t yyi = 0;
		for (char const* yyp = yyformat; *yyp; ++yyp)
			if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
			{
				yyres += symbol_name(yyarg[yyi++]);
				++yyp;
			}
			else
				yyres += *yyp;
		return yyres;
	}


	const signed char compilador_parser::yypact_ninf_ = -115;

	const signed char compilador_parser::yytable_ninf_ = -1;

	const short
		compilador_parser::yypact_[] =
	{
	   259,     4,  -115,  -115,  -115,  -115,   -13,    44,  -115,  -115,
		20,  -115,    -5,    33,    38,  -115,    41,    47,    49,   191,
		58,   191,    56,    54,    70,  -115,    87,    98,    91,   102,
	   103,   108,   111,   112,   182,    19,  -115,   106,  -115,  -115,
	   123,    56,  -115,  -115,  -115,  -115,  -115,  -115,   132,  -115,
	   125,   129,    56,   131,    90,   191,   226,    56,   226,    26,
	   226,     2,    75,  -115,  -115,  -115,  -115,  -115,    13,    -2,
	  -115,  -115,   134,   182,   182,    31,   137,   264,  -115,   175,
	  -115,   191,    56,   140,    56,   141,    77,    23,  -115,  -115,
	   139,   146,    13,   151,   149,   225,   155,   144,   158,   160,
	  -115,  -115,   226,   174,  -115,   182,   156,   177,   178,   179,
	   142,   142,   142,   142,  -115,   189,   203,  -115,   199,   192,
	   169,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
	  -115,  -115,   208,   264,   209,   213,   214,   182,   198,   221,
		90,    90,   228,   216,   232,   233,   202,   207,   126,   260,
	   254,   255,  -115,   257,  -115,  -115,  -115,  -115,    -2,    -2,
	  -115,  -115,   182,   256,  -115,    51,  -115,   258,   261,   264,
	  -115,   264,  -115,  -115,   262,  -115,  -115,  -115,  -115,  -115,
	   263,   226,   226,   226,  -115,   226,  -115,    56,  -115,   265,
		56,   226,  -115,  -115,  -115,   226,  -115,   192,  -115,  -115,
	  -115,   266,  -115,  -115,  -115,  -115,   268,   226,   269,   267,
	  -115,  -115,   272,   273,  -115,   271,   274,   275,    56,    56,
	  -115,   277,   278,  -115,  -115
	};

	const signed char
		compilador_parser::yydefact_[] =
	{
		 0,     0,    13,    14,    15,    16,     0,     0,     2,     3,
		 0,    10,     0,     0,     0,     1,     0,     0,     0,    18,
		 0,    18,     0,     0,     0,    17,     0,     0,     0,     0,
		 0,     0,     0,     0,     0,     0,    57,     0,    55,    56,
		 0,    54,    58,    59,    60,    61,    62,    63,    64,    65,
		20,     0,     0,     0,    26,     0,    26,     0,    26,     0,
		26,     0,    83,    44,    45,    81,    80,    82,    89,    38,
		41,    42,     0,    92,     0,    25,     0,     4,    53,     0,
		99,     0,     0,     0,     0,     0,     0,    29,    28,    27,
		51,    52,    35,     0,     0,     0,     0,     0,     0,     0,
		95,    96,    26,     0,    43,    92,     0,     0,     0,     0,
		 0,     0,     0,     0,    77,    94,     0,    91,     0,     0,
		26,    21,     6,   102,   101,   100,   103,   104,   105,   106,
		98,    19,     0,     5,     0,     0,     0,    92,     0,     0,
		26,    26,     0,     0,     0,     0,    26,    26,     0,     0,
		 0,     0,    46,     0,    86,    85,    84,    87,    36,    37,
		39,    40,     0,     0,    78,    25,    23,     0,    24,     8,
		 7,    12,    31,    33,     0,    30,    32,    50,    49,    47,
		 0,    26,    26,    26,    70,    26,    71,     0,    97,     0,
		 0,    26,    88,    93,    90,    26,    79,     0,     9,    11,
		34,     0,    68,    69,    72,    73,     0,    26,     0,     0,
		22,    48,    66,     0,    74,     0,     0,     0,     0,     0,
		75,     0,     0,    76,    67
	};

	const short
		compilador_parser::yypgoto_[] =
	{
	  -115,  -115,  -115,  -115,   -74,  -115,     1,   279,   197,   -52,
	  -114,   -29,   -24,   -31,   -23,   -47,   -73,   -37,   -41,  -115,
	  -115,   -56,   -71,   -64,   -62,   -50,   -22,  -115,   -92,   124,
	  -115,  -115,  -115,  -115,   147
	};

	const unsigned char
		compilador_parser::yydefgoto_[] =
	{
		 0,     7,     8,     9,    10,    11,    37,    24,    25,    38,
		76,    95,    92,    69,    70,    71,    39,    93,    40,    41,
		42,    96,    43,    44,    45,    46,   115,    47,   116,   117,
	   102,    48,    80,    49,   130
	};

	const unsigned char
		compilador_parser::yytable_[] =
	{
		78,    12,    98,   122,   103,   166,   125,   100,   126,   101,
		68,    83,    72,   153,   104,   127,    97,   128,    14,    60,
		23,    13,    23,    16,   112,    91,    17,   124,   113,   129,
		 2,     3,     4,     5,    63,    64,    73,   110,   111,   104,
	   137,   132,    74,   134,    15,   174,   151,   138,   139,    68,
		68,    18,   118,   119,   120,    19,    94,    99,    20,   170,
		 2,     3,     4,     5,    21,    28,    29,    30,    22,    31,
		32,    33,    34,   119,   195,   125,    26,   126,    12,   158,
	   159,    68,    23,   210,   127,    50,   128,    35,    51,   160,
	   161,   168,   105,    36,    60,   198,   124,   199,   129,   106,
	   107,   108,   136,   177,   178,   109,    52,    60,    54,    63,
		64,    91,    91,    68,    85,    86,    53,   184,   186,    55,
		56,    87,    63,    64,    88,    89,    90,    57,    58,    59,
		 2,     3,     4,     5,    12,    28,    29,    75,    68,    31,
		32,    33,    34,    77,    79,   187,   206,    81,    82,   208,
		84,   213,   202,   203,   204,   114,   205,    99,   121,    60,
	   133,   140,   209,   123,   149,   135,   168,    61,   141,   142,
		12,   143,    12,   148,    63,    64,   150,   221,   222,     2,
		 3,     4,     5,    74,    28,    29,    60,   154,    31,    32,
		33,    34,   152,    85,    86,     2,     3,     4,     5,    60,
		87,    63,    64,    88,    89,   167,    99,    61,   155,   156,
	   157,   162,   123,    62,    63,    64,    65,    66,    67,    60,
	   164,   163,   175,   165,    60,   183,    85,    86,   169,   171,
	   185,    85,    86,    87,    63,    64,    88,    89,    87,    63,
		64,    88,    89,    60,   172,   173,   176,   180,   144,   179,
		85,    86,   145,   146,   147,   181,   182,    87,    63,    64,
		88,    89,     1,     2,     3,     4,     5,     6,     2,     3,
		 4,     5,     6,   190,   189,   192,   191,   194,   131,   196,
	   200,   201,   207,   197,   216,   215,   193,   211,   212,   214,
	   218,   217,     0,   219,     0,   188,   220,   223,   224,     0,
		27
	};

	const short
		compilador_parser::yycheck_[] =
	{
		41,     0,    58,    77,    60,   119,    79,    59,    79,    59,
		34,    52,    34,   105,    61,    79,    57,    79,    31,    17,
		19,    17,    21,     3,    26,    54,    31,    79,    30,    79,
		 4,     5,     6,     7,    32,    33,    17,    24,    25,    86,
		17,    82,    23,    84,     0,   137,   102,    24,    25,    73,
		74,    18,    74,    22,    23,    17,    55,    31,    17,   133,
		 4,     5,     6,     7,    17,     9,    10,    11,    19,    13,
		14,    15,    16,    22,    23,   148,    18,   148,    77,   110,
	   111,   105,    81,   197,   148,    31,   148,    31,    18,   112,
	   113,   120,    17,    37,    17,   169,   148,   171,   148,    24,
		25,    26,    25,   140,   141,    30,    19,    17,    17,    32,
		33,   140,   141,   137,    24,    25,    18,   146,   147,    17,
		17,    31,    32,    33,    34,    35,    36,    19,    17,    17,
		 4,     5,     6,     7,   133,     9,    10,    31,   162,    13,
		14,    15,    16,    20,    12,    19,   187,    22,    19,   190,
		19,   207,   181,   182,   183,    21,   185,    31,    21,    17,
		20,    22,   191,    37,    20,    24,   195,    25,    22,    18,
	   169,    22,   171,    18,    32,    33,    18,   218,   219,     4,
		 5,     6,     7,    23,     9,    10,    17,    31,    13,    14,
		15,    16,    18,    24,    25,     4,     5,     6,     7,    17,
		31,    32,    33,    34,    35,    36,    31,    25,    31,    31,
		31,    22,    37,    31,    32,    33,    34,    35,    36,    17,
		21,    18,    24,    31,    17,    23,    24,    25,    20,    20,
		23,    24,    25,    31,    32,    33,    34,    35,    31,    32,
		33,    34,    35,    17,    31,    31,    25,    31,    23,    21,
		24,    25,    27,    28,    29,    23,    23,    31,    32,    33,
		34,    35,     3,     4,     5,     6,     7,     8,     4,     5,
		 6,     7,     8,    19,    14,    18,    21,    21,    81,    21,
		18,    18,    17,    22,    12,    18,   162,    21,    20,    20,
		19,    18,    -1,    19,    -1,   148,    21,    20,    20,    -1,
		21
	};

	const signed char
		compilador_parser::yystos_[] =
	{
		 0,     3,     4,     5,     6,     7,     8,    39,    40,    41,
		42,    43,    44,    17,    31,     0,     3,    31,    18,    17,
		17,    17,    19,    44,    45,    46,    18,    45,     9,    10,
		11,    13,    14,    15,    16,    31,    37,    44,    47,    54,
		56,    57,    58,    60,    61,    62,    63,    65,    69,    71,
		31,    18,    19,    18,    17,    17,    17,    19,    17,    17,
		17,    25,    31,    32,    33,    34,    35,    36,    50,    51,
		52,    53,    64,    17,    23,    31,    48,    20,    56,    12,
		70,    22,    19,    56,    19,    24,    25,    31,    34,    35,
		36,    49,    50,    55,    44,    49,    59,    56,    59,    31,
		47,    63,    68,    59,    53,    17,    24,    25,    26,    30,
		24,    25,    26,    30,    21,    64,    66,    67,    64,    22,
		23,    21,    42,    37,    47,    54,    60,    61,    62,    63,
		72,    46,    56,    20,    56,    24,    25,    17,    24,    25,
		22,    22,    18,    22,    23,    27,    28,    29,    18,    20,
		18,    59,    18,    66,    31,    31,    31,    31,    51,    51,
		52,    52,    22,    18,    21,    31,    48,    36,    49,    20,
		42,    20,    31,    31,    66,    24,    25,    55,    55,    21,
		31,    23,    23,    23,    49,    23,    49,    19,    72,    14,
		19,    21,    18,    67,    21,    23,    21,    22,    42,    42,
		18,    18,    49,    49,    49,    49,    56,    17,    56,    49,
		48,    21,    20,    59,    20,    18,    12,    18,    19,    19,
		21,    56,    56,    20,    20
	};

	const signed char
		compilador_parser::yyr1_[] =
	{
		 0,    38,    39,    40,    41,    41,    41,    41,    42,    42,
		42,    43,    43,    44,    44,    44,    44,    45,    45,    46,
		46,    47,    48,    48,    48,    48,    49,    49,    49,    49,
		49,    49,    49,    49,    49,    49,    50,    50,    50,    51,
		51,    51,    52,    52,    53,    53,    53,    54,    54,    55,
		55,    55,    55,    56,    56,    57,    57,    57,    57,    57,
		57,    57,    57,    57,    57,    57,    58,    58,    59,    59,
		59,    59,    59,    59,    60,    60,    61,    62,    63,    63,
		64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
		65,    66,    66,    67,    67,    68,    68,    69,    70,    71,
		72,    72,    72,    72,    72,    72,    72
	};

	const signed char
		compilador_parser::yyr2_[] =
	{
		 0,     2,     1,     1,     6,     7,     7,     8,     8,     9,
		 1,     9,     8,     1,     1,     1,     1,     1,     0,     4,
		 2,     3,     5,     3,     3,     1,     0,     1,     1,     1,
		 3,     3,     3,     3,     4,     1,     3,     3,     1,     3,
		 3,     1,     1,     2,     1,     1,     3,     5,     7,     3,
		 3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
		 1,     1,     1,     1,     1,     1,     7,    11,     4,     4,
		 3,     3,     4,     4,     7,     9,    10,     3,     4,     5,
		 1,     1,     1,     1,     3,     3,     3,     3,     4,     1,
		 5,     1,     0,     3,     1,     1,     1,     5,     2,     2,
		 1,     1,     1,     1,     1,     1,     1
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
	"\"car\"", "\"texto\"", "\"comentario\"", "$accept", "META", "A", "I",
	"B", "F", "C", "D", "E", "R", "P", "G", "K", "H", "Q", "J", "L", "O",
	"M", "N", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "AB", "AC", "AD",
	"AE", "AF", "AG", YY_NULLPTR
	};
#endif


#if YYDEBUG
	const unsigned char
		compilador_parser::yyrline_[] =
	{
		 0,    97,    97,    99,   101,   102,   103,   104,   106,   107,
	   108,   110,   111,   113,   114,   115,   116,   118,   119,   122,
	   123,   125,   127,   128,   129,   130,   132,   132,   133,   134,
	   135,   136,   137,   138,   139,   140,   142,   143,   144,   146,
	   147,   148,   150,   151,   153,   154,   155,   157,   158,   160,
	   161,   162,   163,   165,   166,   168,   169,   170,   171,   172,
	   173,   174,   175,   176,   177,   178,   180,   181,   184,   185,
	   186,   187,   188,   189,   191,   192,   194,   196,   198,   199,
	   201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
	   212,   214,   215,   218,   219,   221,   222,   224,   226,   228,
	   230,   231,   232,   233,   234,   235,   236
	};

	void
		compilador_parser::yy_stack_print_() const
	{
		*yycdebug_ << "Stack now";
		for (stack_type::const_iterator
			i = yystack_.begin(),
			i_end = yystack_.end();
			i != i_end; ++i)
			*yycdebug_ << ' ' << int(i->state);
		*yycdebug_ << '\n';
	}

	void
		compilador_parser::yy_reduce_print_(int yyrule) const
	{
		int yylno = yyrline_[yyrule];
		int yynrhs = yyr2_[yyrule];
		// Print the symbols being reduced, and their result.
		*yycdebug_ << "Reducing stack by rule " << yyrule - 1
			<< " (line " << yylno << "):\n";
		// The symbols being reduced.
		for (int yyi = 0; yyi < yynrhs; yyi++)
			YY_SYMBOL_PRINT("   $" << yyi + 1 << " =",
				yystack_[(yynrhs)-(yyi + 1)]);
	}
#endif // YYDEBUG


#line 6 "parser.yy"
} // yy
#line 1446 "parser.tab.cc"

#line 237 "parser.yy"


void yy::compilador_parser::error(const location_type& lugar, const std::string& lexema)
{
	/*std::cout << "Error Sintactico " << lugar << " " << lexema << std::endl;*/
	ofstream pagina;
	pagina.open("C:\\Users\\Luis Fernando Paxel\\Music\\PROYECTO_FN\\compiladoresProyecto\\Archivos\\Archivos_staticos\\eSintactios.txt", ios::app);
	pagina << "<tr>" << "<td>1</td>" << "<td>Error Sintactico</td>" << "<td>" << lugar << "</td>" << "<td>" << lexema << "<td>" << "</tr>";
	pagina.close();
}
