<h1>Final Project : Seneca Library Application</h1>
<div>I created a user-friendly interface C++ application for managing the library's publication management system</div>
<div>-  Language: C++</div>
<div>-  Functions: Add, Remove, Return, Checkout publication</div>
<div>-  Applied object-oriented programming principles by creating classes and objects to encapsulate data and associated functionalities</div>
<br>
________________________________________________________________________________________________________________________________________________________
<h1>Program Output</h1>
<h2>Add New Publication</h2>

Loading Data<br>
Seneca Library Application<br>
 1- Add New Publication<br>
 2- Remove Publication<br>
 3- Checkout publication from library<br>
 4- Return publication to library<br>
 0- Exit<br>
>Input: 1<br>

Adding new publication to the library<br>
Choose the type of publication:<br>
 1- Book<br>
 2- Publication<br>
 0- Exit<br>
>Input: 1<br>

Shelf No: S001<br>
Title: Book one<br>
Date: 2022/6/10<br>
Author: John Doe<br>
Add this publication to the library?<br>
 1- Yes<br>
 0- Exit<br>
>Input: 1<br>

Publication added<br>
<br>


<h2>Remove Publication</h2>
Seneca Library Application<br>
 1- Add New Publication<br>
 2- Remove Publication<br>
 3- Checkout publication from library<br>
 4- Return publication to library<br>
 0- Exit<br>
 
>Input: 2<br>

Removing publication from the library<br>
Choose the type of publication:<br>
 1- Book<br>
 2- Publication<br>
 0- Exit<br>
>Input: 2<br>

Publication Title: e<br>
Select one of the following found matches:<br>
 Row  |LocID | Title                          |Mem ID | Date       | Author          |<br>
------+------+--------------------------------+-------+------------+-----------------|<br>
   1- | P008 | Canadian Running Magazine..... |  N/A  | 2022/07/18 |<br>
   2- | P008 | Canadian Running Magazine..... | 77051 | 2022/07/25 |<br>
   3- | P002 | The Toronto SUN............... |  N/A  | 2022/07/11 |<br>
   4- | P002 | The Toronto SUN............... | 85176 | 2022/07/17 |<br>
> X (to Exit)<br>
> Row Number(select publication)<br>
>Input: 3<br>

| P002 | The Toronto SUN............... |  N/A  | 2022/07/11 |<br>
Remove this publication from the library?<br>
 1- Yes<br>
 0- Exit<br>
>Input: 1<br>

Publication removed<br>
<br>


<h2>Checkout publication from library</h2>
Seneca Library Application<br>
 1- Add New Publication<br>
 2- Remove Publication<br>
 3- Checkout publication from library<br>
 4- Return publication to library<br>
 0- Exit<br>
 
>Input: 3<br>

Checkout publication from the library<br>
Choose the type of publication:<br>
 1- Book<br>
 2- Publication<br>
 0- Exit<br>
 >Input: 1<br>

Publication Title:<br>
Select one of the following found matches:<br>
 Row  |LocID | Title                          |Mem ID | Date       | Author          |<br>
------+------+--------------------------------+-------+------------+-----------------|<br>
   1- | Q413 | A Brief History of Time....... |  N/A  | 2022/07/18 | Stephen Hawking |<br>
   2- | T223 | A Message to Garcia........... |  N/A  | 2022/07/24 | Elbert Hubbard  |<br>
   3- | Z409 | A Wrinkle in Time............. |  N/A  | 2022/07/22 | Madeleine L'Eng |<br>
   4- | N299 | Adventures of Huckleberry Finn |  N/A  | 2022/07/16 | Mark Twain      |<br>
   5- | W452 | Alex Cross.................... |  N/A  | 2022/07/25 | James Patterson |<br>
   6- | L261 | All Quiet on the Western Front |  N/A  | 2022/07/23 | Erich Maria Rem |<br>
   7- | V353 | American Girl................. |  N/A  | 2022/07/20 | Various authors |<br>
   8- | H141 | Andromeda Nebula.............. |  N/A  | 2022/07/17 | Ivan Yefremov   |<br>
   9- | N368 | Angela's Ashes................ |  N/A  | 2022/07/11 | Frank McCourt   |<br>
  10- | R141 | Anpanman...................... |  N/A  | 2022/07/15 | Takashi Yanase  |<br>
  11- | E807 | Autobiography of a Yogi....... |  N/A  | 2022/07/18 | Paramahansa Yog |<br>
  12- | E505 | Captain Underpants............ |  N/A  | 2022/07/22 | Dav Pilkey      |<br>
  13- | U200 | Catch/22...................... |  N/A  | 2022/07/15 | Joseph Heller   |<br>
  14- | J808 | Catching Fire................. |  N/A  | 2022/07/13 | Suzanne Collins |<br>
  15- | Z192 | Charlotte's Web............... |  N/A  | 2022/07/17 | E. B. White; il |<br>
> N (Next page)<br>
> X (to Exit)<br>
> Row Number(select publication)<br>
>Input: 1<br>

| Q413 | A Brief History of Time....... |  N/A  | 2022/07/18 | Stephen Hawking |<br>
Check out publication?<br>
 1- Yes<br>
 0- Exit<br>
>Input: 1<br>
>Enter Membership number: 123456<br>
>Invalid membership number, try again: 12345<br>
Publication checked out<br>
<br>

<h2>Return publication to library</h2>
Seneca Library Application<br>
 1- Add New Publication<br>
 2- Remove Publication<br>
 3- Checkout publication from library<br>
 4- Return publication to library<br>
 0- Exit<br>
 
>Input: 4<br>

Return publication to the library<br>
Choose the type of publication:<br>
 1- Book<br>
 2- Publication<br>
 0- Exit<br>
>Input: 1<br>

Publication Title: Harry<br>
Select one of the following found matches:<br>
 Row  |LocID | Title                          |Mem ID | Date       | Author          |<br>
------+------+--------------------------------+-------+------------+-----------------|<br>
   1- | D208 | Harry Potter and the Philosoph | 72685 | 2022/07/19 | J. K. Rowling   |<br>
> X (to Exit)<br>
> Row Number(select publication)<br>
>Input: 1<br>

| D208 | Harry Potter and the Philosoph | 72685 | 2022/07/19 | J. K. Rowling   |<br>
Return Publication?<br>
 1- Yes<br>
 0- Exit<br>
>Input: 1<br>

Please pay $3.50 penalty for being 7 days late!<br>
Publication returned<br>
<br>


<h2>Exit Program</h2>
Seneca Library Application<br>
 1- Add New Publication<br>
 2- Remove Publication<br>
 3- Checkout publication from library<br>
 4- Return publication to library<br>
 0- Exit<br>
 
>Input: 0<br>

Changes have been made to the data, what would you like to do?<br>
 1- Save changes and exit<br>
 2- Cancel and go back to the main menu<br>
 0- Exit<br>
>Input: 0<br>

This will discard all the changes are you sure?<br>
 1- Yes<br>
 0- Exit<br>
>Input: 1<br>
