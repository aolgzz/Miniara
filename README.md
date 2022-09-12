# Miniara
## Table of Contents
1. [Miniara](#miniara)
2. [The MUTRAN Family](#the-mutran-family)
3. [MUTRAN](#mutran)
4. [MUT](#mut)

### Miniara
<p align = "justify">&#8195;&#8195;&#8195;Miniara is an acronym for "<i><b>mini</b></i> synt<i><b>a</b></i>x analyze<i><b>r</b></i> for modern MUTR<i><b>A</b></i>N (MUT) notes". But what exactly is MUTRAN? In a nutshell, MUTRAN is a language for music; specifically, it is a melody description language. On the other hand, MUT is a descent from MUTRAN (this is the reason why it is also referred to as modern MUTRAN) and, apart from describing melody, it can also describe harmony. There's also M, which is a descent from MUT, and aside from harmony and melody, it describes lyrics.</p> 
  
<p align = "justify">However, just like Latin, MUTRAN is a dead language, and so are all of its descendants. Actually, it is so forgotten that the only reference available on the Internet is Peter S. Langston's article <a href="https://www.usenix.org/legacy/publications/compsystems/1990/spr_langston.pdf"><i>Little Languages for Music</i></a>, in which he describes what he calls "little languages".</p>

><p align = "justify">"<i>Little languages are programming languages or data description languages that are specialized to a particular problem domain. In the lastdecade, little languages have emerged to support a multitude of tasks ranging from complex statistical calculations to the construction of lexical parsers.</i>"</p>
><p align = "right">Langston, P. S. (1990). <i>Little languages for music</i>. Computing Systems, Vol. 3, No. 2, p. 193</p>
  
<p align = "justify">So, knowing that, why even bother working with a dead language? The motivation of this project comes from the quote shown above, in particular "<i>...the construction of lexical parsers</i>". That is exactly what Miniara is, it checks if MUT notes are correctly written, and is well-known that a lexer and parser are just one of the first stages of a translator (compiler or interpreter). Miniara is just the beginning of a much deeper project I am working on.</p>
 
### The MUTRAN family
><p align = "justify">"<i>One of the fundamental problems that any computer music transcription scheme must solve is that of specifying pitches and durations in an easily editable form. In addition to being representable in bits and bytes, the encoding must be easy to learn, compact, and complete. Even the standard musical notation scheme, handwritten or printed, only partially accomplishes these goals. Music notation has a long history and is understood by most people interested in reading or writing music. Unfortunately, normal music notation is continuous and two-dimensional and is not easily converted to the quantized linear form that digital computers impose. Instead of basing its representation on the written score, MUTRAN modeled itself on the musician's verbal description of a piece; a description that is inherently linear, but not yet quantified. The MUTRAN conventions, based on characters to specify tones and durations and representable in bits and bytes, are easy to learn and compact, but limited. In an attempt to remedy its limitations, other languages have adopted and extended the MUTRAN notation.</i>"
><p align = "right">Langston, P. S. (1990). <i>Little languages for music</i>. Computing Systems, Vol. 3, No. 2, p. 216</p>

<p align = "justify">It is inteded to do what other computer scientists, and programmers have done by inspiring themselves to create new programming languages in order to improve or redefine previous ones. The most notorius examples are the programming language Java, which has inspired different programming languages like Groovy, Scala, Kotlin, Clojure, among other JVM (Java Virtual Machine) language implementations, and C++, which took the OO (Object-Oriented) concepts from SIMULA, but with C's performance. Our case is similar to what Langston described, to take the compact, and intuitive way of MUT (modern MUTRAN) to represent musical notes, but remeding its limitations by extending the language.</p>

*   ### MUTRAN

    <p align = "justify"><b>NOTE: Although MUTRAN is not the language in which we plan to work with, it is important to document of what it consists because MUT was born from it.</b></p>

*   ### MUT

    some text in p2 paragraph (under H2)
