// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison LALR(1) parsers in C++

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


/**
 ** \file parser.tab.hh
 ** Define the yy::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_PARSER_TAB_HH_INCLUDED
# define YY_YY_PARSER_TAB_HH_INCLUDED
// "%code requires" blocks.
#line 10 "parser.yy"

#include <string>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <stdio.h> 
#include <string.h>
using namespace std;
class compilador_driver;

#line 61 "parser.tab.hh"

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"
#include <typeinfo>
#ifndef YY_ASSERT
# include <cassert>
# define YY_ASSERT assert
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

#line 6 "parser.yy"
namespace yy {
#line 202 "parser.tab.hh"




  /// A Bison parser.
  class compilador_parser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class value_type
  {
  public:
    /// Type of *this.
    typedef value_type self_type;

    /// Empty construction.
    value_type () YY_NOEXCEPT
      : yyraw_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    value_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YY_ASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    value_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~value_type () YY_NOEXCEPT
    {
      YY_ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    value_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yyraw_;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yyraw_;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // "dec"
      char dummy1[sizeof (float)];

      // "num"
      char dummy2[sizeof (int)];

      // "inicio"
      // "entero"
      // "caracter"
      // "decimal"
      // "fecha"
      // "procedimiento"
      // "mostrar"
      // "asignar"
      // "si"
      // "sino"
      // "hacer"
      // "mientras"
      // "para"
      // "retornar"
      // "id"
      // "fec"
      // "car"
      // "texto"
      // "comentario"
      char dummy3[sizeof (std::string)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me_;
      /// A buffer large enough to store any of the semantic values.
      char yyraw_[size];
    };

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;

    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        TOK_YYEMPTY = -2,
    TOK_FIN = 0,                   // "eof"
    TOK_YYerror = 256,             // error
    TOK_YYUNDEF = 257,             // "invalid token"
    TOK_INICIO = 258,              // "inicio"
    TOK_ENTERO = 259,              // "entero"
    TOK_CARACTER = 260,            // "caracter"
    TOK_DECIMAL = 261,             // "decimal"
    TOK_FECHA = 262,               // "fecha"
    TOK_PROCEDIMIENTO = 263,       // "procedimiento"
    TOK_MOSTRAR = 264,             // "mostrar"
    TOK_ASIGNAR = 265,             // "asignar"
    TOK_SI = 266,                  // "si"
    TOK_SINO = 267,                // "sino"
    TOK_HACER = 268,               // "hacer"
    TOK_MIENTRAS = 269,            // "mientras"
    TOK_PARA = 270,                // "para"
    TOK_RETORNAR = 271,            // "retornar"
    TOK_PARENTESISABIERTO = 272,   // "("
    TOK_PARENTESISCERRADO = 273,   // ")"
    TOK_LLAVEABIERTA = 274,        // "{"
    TOK_LLAVECERRADA = 275,        // "}"
    TOK_PUNTOCOMA = 276,           // ";"
    TOK_COMA = 277,                // ","
    TOK_IGUAL = 278,               // "="
    TOK_SUMA = 279,                // "+"
    TOK_RESTA = 280,               // "-"
    TOK_MULTIPLICA = 281,          // "*"
    TOK_DIFERENCIA = 282,          // "!"
    TOK_MENOR = 283,               // "<"
    TOK_MAYOR = 284,               // ">"
    TOK_DIVISION = 285,            // "/"
    TOK_IDENTIFICADOR = 286,       // "id"
    TOK_NUMERO = 287,              // "num"
    TOK_REAL = 288,                // "dec"
    TOK_DFECHA = 289,              // "fec"
    TOK_DCARACTER = 290,           // "car"
    TOK_TEXTO = 291,               // "texto"
    TOK_COMENTARIO = 292           // "comentario"
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 38, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "eof"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_INICIO = 3,                            // "inicio"
        S_ENTERO = 4,                            // "entero"
        S_CARACTER = 5,                          // "caracter"
        S_DECIMAL = 6,                           // "decimal"
        S_FECHA = 7,                             // "fecha"
        S_PROCEDIMIENTO = 8,                     // "procedimiento"
        S_MOSTRAR = 9,                           // "mostrar"
        S_ASIGNAR = 10,                          // "asignar"
        S_SI = 11,                               // "si"
        S_SINO = 12,                             // "sino"
        S_HACER = 13,                            // "hacer"
        S_MIENTRAS = 14,                         // "mientras"
        S_PARA = 15,                             // "para"
        S_RETORNAR = 16,                         // "retornar"
        S_PARENTESISABIERTO = 17,                // "("
        S_PARENTESISCERRADO = 18,                // ")"
        S_LLAVEABIERTA = 19,                     // "{"
        S_LLAVECERRADA = 20,                     // "}"
        S_PUNTOCOMA = 21,                        // ";"
        S_COMA = 22,                             // ","
        S_IGUAL = 23,                            // "="
        S_SUMA = 24,                             // "+"
        S_RESTA = 25,                            // "-"
        S_MULTIPLICA = 26,                       // "*"
        S_DIFERENCIA = 27,                       // "!"
        S_MENOR = 28,                            // "<"
        S_MAYOR = 29,                            // ">"
        S_DIVISION = 30,                         // "/"
        S_IDENTIFICADOR = 31,                    // "id"
        S_NUMERO = 32,                           // "num"
        S_REAL = 33,                             // "dec"
        S_DFECHA = 34,                           // "fec"
        S_DCARACTER = 35,                        // "car"
        S_TEXTO = 36,                            // "texto"
        S_COMENTARIO = 37,                       // "comentario"
        S_YYACCEPT = 38,                         // $accept
        S_META = 39,                             // META
        S_A = 40,                                // A
        S_I = 41,                                // I
        S_B = 42,                                // B
        S_F = 43,                                // F
        S_C = 44,                                // C
        S_D = 45,                                // D
        S_E = 46,                                // E
        S_R = 47,                                // R
        S_P = 48,                                // P
        S_G = 49,                                // G
        S_K = 50,                                // K
        S_H = 51,                                // H
        S_Q = 52,                                // Q
        S_J = 53,                                // J
        S_L = 54,                                // L
        S_O = 55,                                // O
        S_M = 56,                                // M
        S_N = 57,                                // N
        S_S = 58,                                // S
        S_T = 59,                                // T
        S_U = 60,                                // U
        S_V = 61,                                // V
        S_W = 62,                                // W
        S_X = 63,                                // X
        S_Y = 64,                                // Y
        S_Z = 65,                                // Z
        S_AA = 66,                               // AA
        S_AB = 67,                               // AB
        S_AC = 68,                               // AC
        S_AD = 69,                               // AD
        S_AE = 70,                               // AE
        S_AF = 71,                               // AF
        S_AG = 72                                // AG
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
        , location (std::move (that.location))
      {
        switch (this->kind ())
    {
      case symbol_kind::S_REAL: // "dec"
        value.move< float > (std::move (that.value));
        break;

      case symbol_kind::S_NUMERO: // "num"
        value.move< int > (std::move (that.value));
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
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, float&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const float& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, int&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const int& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      case symbol_kind::S_REAL: // "dec"
        value.template destroy< float > ();
        break;

      case symbol_kind::S_NUMERO: // "num"
        value.template destroy< int > ();
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
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      std::string name () const YY_NOEXCEPT
      {
        return compilador_parser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () YY_NOEXCEPT {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type (token_kind_type (tok), std::move (l))
#else
      symbol_type (int tok, const location_type& l)
        : super_type (token_kind_type (tok), l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::TOK_FIN
                   || (token::TOK_YYerror <= tok && tok <= token::TOK_YYUNDEF)
                   || (token::TOK_PARENTESISABIERTO <= tok && tok <= token::TOK_DIVISION));
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, float v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const float& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::TOK_REAL);
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, int v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const int& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::TOK_NUMERO);
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT ((token::TOK_INICIO <= tok && tok <= token::TOK_RETORNAR)
                   || tok == token::TOK_IDENTIFICADOR
                   || (token::TOK_DFECHA <= tok && tok <= token::TOK_COMENTARIO));
#endif
      }
    };

    /// Build a parser object.
    compilador_parser (compilador_driver& driver_yyarg);
    virtual ~compilador_parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    compilador_parser (const compilador_parser&) = delete;
    /// Non copyable.
    compilador_parser& operator= (const compilador_parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each token kind.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FIN (location_type l)
      {
        return symbol_type (token::TOK_FIN, std::move (l));
      }
#else
      static
      symbol_type
      make_FIN (const location_type& l)
      {
        return symbol_type (token::TOK_FIN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYerror (location_type l)
      {
        return symbol_type (token::TOK_YYerror, std::move (l));
      }
#else
      static
      symbol_type
      make_YYerror (const location_type& l)
      {
        return symbol_type (token::TOK_YYerror, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYUNDEF (location_type l)
      {
        return symbol_type (token::TOK_YYUNDEF, std::move (l));
      }
#else
      static
      symbol_type
      make_YYUNDEF (const location_type& l)
      {
        return symbol_type (token::TOK_YYUNDEF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INICIO (std::string v, location_type l)
      {
        return symbol_type (token::TOK_INICIO, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INICIO (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_INICIO, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ENTERO (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ENTERO, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ENTERO (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ENTERO, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CARACTER (std::string v, location_type l)
      {
        return symbol_type (token::TOK_CARACTER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CARACTER (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_CARACTER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DECIMAL (std::string v, location_type l)
      {
        return symbol_type (token::TOK_DECIMAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DECIMAL (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_DECIMAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FECHA (std::string v, location_type l)
      {
        return symbol_type (token::TOK_FECHA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FECHA (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_FECHA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PROCEDIMIENTO (std::string v, location_type l)
      {
        return symbol_type (token::TOK_PROCEDIMIENTO, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PROCEDIMIENTO (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_PROCEDIMIENTO, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MOSTRAR (std::string v, location_type l)
      {
        return symbol_type (token::TOK_MOSTRAR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MOSTRAR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_MOSTRAR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASIGNAR (std::string v, location_type l)
      {
        return symbol_type (token::TOK_ASIGNAR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ASIGNAR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_ASIGNAR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SI (std::string v, location_type l)
      {
        return symbol_type (token::TOK_SI, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SI (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_SI, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SINO (std::string v, location_type l)
      {
        return symbol_type (token::TOK_SINO, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SINO (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_SINO, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_HACER (std::string v, location_type l)
      {
        return symbol_type (token::TOK_HACER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_HACER (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_HACER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MIENTRAS (std::string v, location_type l)
      {
        return symbol_type (token::TOK_MIENTRAS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MIENTRAS (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_MIENTRAS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PARA (std::string v, location_type l)
      {
        return symbol_type (token::TOK_PARA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_PARA (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_PARA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RETORNAR (std::string v, location_type l)
      {
        return symbol_type (token::TOK_RETORNAR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RETORNAR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_RETORNAR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PARENTESISABIERTO (location_type l)
      {
        return symbol_type (token::TOK_PARENTESISABIERTO, std::move (l));
      }
#else
      static
      symbol_type
      make_PARENTESISABIERTO (const location_type& l)
      {
        return symbol_type (token::TOK_PARENTESISABIERTO, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PARENTESISCERRADO (location_type l)
      {
        return symbol_type (token::TOK_PARENTESISCERRADO, std::move (l));
      }
#else
      static
      symbol_type
      make_PARENTESISCERRADO (const location_type& l)
      {
        return symbol_type (token::TOK_PARENTESISCERRADO, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LLAVEABIERTA (location_type l)
      {
        return symbol_type (token::TOK_LLAVEABIERTA, std::move (l));
      }
#else
      static
      symbol_type
      make_LLAVEABIERTA (const location_type& l)
      {
        return symbol_type (token::TOK_LLAVEABIERTA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LLAVECERRADA (location_type l)
      {
        return symbol_type (token::TOK_LLAVECERRADA, std::move (l));
      }
#else
      static
      symbol_type
      make_LLAVECERRADA (const location_type& l)
      {
        return symbol_type (token::TOK_LLAVECERRADA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PUNTOCOMA (location_type l)
      {
        return symbol_type (token::TOK_PUNTOCOMA, std::move (l));
      }
#else
      static
      symbol_type
      make_PUNTOCOMA (const location_type& l)
      {
        return symbol_type (token::TOK_PUNTOCOMA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMA (location_type l)
      {
        return symbol_type (token::TOK_COMA, std::move (l));
      }
#else
      static
      symbol_type
      make_COMA (const location_type& l)
      {
        return symbol_type (token::TOK_COMA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IGUAL (location_type l)
      {
        return symbol_type (token::TOK_IGUAL, std::move (l));
      }
#else
      static
      symbol_type
      make_IGUAL (const location_type& l)
      {
        return symbol_type (token::TOK_IGUAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SUMA (location_type l)
      {
        return symbol_type (token::TOK_SUMA, std::move (l));
      }
#else
      static
      symbol_type
      make_SUMA (const location_type& l)
      {
        return symbol_type (token::TOK_SUMA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RESTA (location_type l)
      {
        return symbol_type (token::TOK_RESTA, std::move (l));
      }
#else
      static
      symbol_type
      make_RESTA (const location_type& l)
      {
        return symbol_type (token::TOK_RESTA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MULTIPLICA (location_type l)
      {
        return symbol_type (token::TOK_MULTIPLICA, std::move (l));
      }
#else
      static
      symbol_type
      make_MULTIPLICA (const location_type& l)
      {
        return symbol_type (token::TOK_MULTIPLICA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIFERENCIA (location_type l)
      {
        return symbol_type (token::TOK_DIFERENCIA, std::move (l));
      }
#else
      static
      symbol_type
      make_DIFERENCIA (const location_type& l)
      {
        return symbol_type (token::TOK_DIFERENCIA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MENOR (location_type l)
      {
        return symbol_type (token::TOK_MENOR, std::move (l));
      }
#else
      static
      symbol_type
      make_MENOR (const location_type& l)
      {
        return symbol_type (token::TOK_MENOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MAYOR (location_type l)
      {
        return symbol_type (token::TOK_MAYOR, std::move (l));
      }
#else
      static
      symbol_type
      make_MAYOR (const location_type& l)
      {
        return symbol_type (token::TOK_MAYOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIVISION (location_type l)
      {
        return symbol_type (token::TOK_DIVISION, std::move (l));
      }
#else
      static
      symbol_type
      make_DIVISION (const location_type& l)
      {
        return symbol_type (token::TOK_DIVISION, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IDENTIFICADOR (std::string v, location_type l)
      {
        return symbol_type (token::TOK_IDENTIFICADOR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IDENTIFICADOR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_IDENTIFICADOR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NUMERO (int v, location_type l)
      {
        return symbol_type (token::TOK_NUMERO, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NUMERO (const int& v, const location_type& l)
      {
        return symbol_type (token::TOK_NUMERO, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_REAL (float v, location_type l)
      {
        return symbol_type (token::TOK_REAL, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_REAL (const float& v, const location_type& l)
      {
        return symbol_type (token::TOK_REAL, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DFECHA (std::string v, location_type l)
      {
        return symbol_type (token::TOK_DFECHA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DFECHA (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_DFECHA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DCARACTER (std::string v, location_type l)
      {
        return symbol_type (token::TOK_DCARACTER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DCARACTER (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_DCARACTER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TEXTO (std::string v, location_type l)
      {
        return symbol_type (token::TOK_TEXTO, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TEXTO (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_TEXTO, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMENTARIO (std::string v, location_type l)
      {
        return symbol_type (token::TOK_COMENTARIO, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_COMENTARIO (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_COMENTARIO, v, l);
      }
#endif


    class context
    {
    public:
      context (const compilador_parser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      const location_type& location () const YY_NOEXCEPT { return yyla_.location; }

      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const compilador_parser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    compilador_parser (const compilador_parser&);
    /// Non copyable.
    compilador_parser& operator= (const compilador_parser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef unsigned char state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const unsigned char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const unsigned char yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const signed char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const signed char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const unsigned char yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 300,     ///< Last index in yytable_.
      yynnts_ = 35,  ///< Number of nonterminal symbols.
      yyfinal_ = 15 ///< Termination state number.
    };


    // User arguments.
    compilador_driver& driver;

  };

  inline
  compilador_parser::symbol_kind_type
  compilador_parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
    };
    // Last valid token kind.
    const int code_max = 292;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

  // basic_symbol.
  template <typename Base>
  compilador_parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->kind ())
    {
      case symbol_kind::S_REAL: // "dec"
        value.copy< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_NUMERO: // "num"
        value.copy< int > (YY_MOVE (that.value));
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
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }




  template <typename Base>
  compilador_parser::symbol_kind_type
  compilador_parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  compilador_parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  compilador_parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_REAL: // "dec"
        value.move< float > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_NUMERO: // "num"
        value.move< int > (YY_MOVE (s.value));
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
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_kind.
  inline
  compilador_parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  compilador_parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  inline
  compilador_parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  inline
  compilador_parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  inline
  void
  compilador_parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  inline
  void
  compilador_parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  inline
  compilador_parser::symbol_kind_type
  compilador_parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  inline
  compilador_parser::symbol_kind_type
  compilador_parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


#line 6 "parser.yy"
} // yy
#line 2128 "parser.tab.hh"




#endif // !YY_YY_PARSER_TAB_HH_INCLUDED
