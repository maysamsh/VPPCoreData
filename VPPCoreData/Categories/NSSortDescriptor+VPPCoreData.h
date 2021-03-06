//
//  NSSortDescriptor+VPPCoreData.h
//  movete
//
//  Created by Víctor on 20/03/12.

//    Copyright (c) 2012 Víctor Pena Placer (@vicpenap)
//    http://www.victorpena.es/
//
//
//    Permission is hereby granted, free of charge, to any person obtaining a copy of 
//    this software and associated documentation files (the "Software"), to deal in 
//    the Software without restriction, including without limitation the rights to 
//    use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//    the Software, and to permit persons to whom the Software is furnished to do so,
//    subject to the following conditions:
//
//    The above copyright notice and this permission notice shall be included in all 
//    copies or substantial portions of the Software.
//
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
//    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
//    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
//    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
//    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
//    SOFTWARE.




#import <Foundation/Foundation.h>

@interface NSSortDescriptor (VPPCoreData)

/** Returns an array of sort descriptors based on the SQL-like string passed
 as parameter. 
 
 Usage:
 
 You can pass an order-by clause just like in SQL. Syntax expected:
    property [asc|desc][, property [asc|desc]][, ...]
 
 Examples:
 - date
 - date asc
 - date desc, title, id asc
 */
+ (NSArray *) sortDescriptorsFromSQLString:(NSString *)string;

@end
