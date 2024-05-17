Kind's Index
============

> This is the ecosystem for the old [Kind](https://github.com/HigherOrderCO/Kind1/), and has been archived since the [refactor](https://github.com/HigherOrderCO/kind).

This repository contains the ecosystem tree. Compared to other proof languages,
it takes a slightly different approach, that makes some deliberate separations
between programming vs mathematics, datatypes vs traits, shared code vs
specific projects. The root namespace is split into 5 major categories:

### Data

Datatypes and structures, such as Integers, Strings and Lists. It includes
everything that is usually handled and manipuled as data, as well as their
associated algorithms. As such, it is the central hub of shared libraries
related to programming and software engineering. It also includes types such as
Function and IO, which are handled as data in a functional language like Kind.

### Trait

Interfaces, traits or typeclasses such as Mappeable, Numeric and Show. It
includes everything that can be seen as an abstraction that allows different
types to be used interchangeably. While Kind doesn't have typeclasses as a
built-in feature, it still encourages implementing them as dictionaries of
behaviors that a type can implement. For example, Show represents anything that
can be stringified. All these abstractions belong here.

### Prop

Proposition formers such as Equal, IsEven and Not. Kind features a rich type
system capable of expressing arbitrary specifications as types, allowing users
to prove invariants and theorems about their software. The Prop namespace is the
central hub for type-level programming constructs relevant to theorem proving.
Relations such as Equal, predicates such as IsEven, and even logical concepts
like Not belong here.

### Math

Fields of mathematics, such as Algebra, Geometry and Topology. While mathematics
and programming are, under the hoods, the same thing, humans treat these
differently. As such, it is the central hub for the mathematical interpretation
of code, and areas of study that are associated with math belong here. So, from
`Data.Pair` vs `Math.Logic.And`, `Trait.Mappeable` vs `Math.Category.Functor`,
`Trait.Concatenable` vs `Math.Logic.Monoid`; all would offer two points of view
for the same underlying concept.

### Apps

Applications built by Kind users. In other words, everything that can be seen as
a specific project, rather than part of the common shared infrastructure,
belongs here. This includes the Kind Language, the Interaction Calculus, and
will include all sorts of packages, utilities, apps and games that will be built
once the package manager is ready.

# Migration Note

Kindex is being reorganized right now (May 9, 2023), in preparation for the
upcoming package manager. As such, many types will not type-check over the
next few days. Check earlier commits if you need to use it.
