/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSNumber.h> // Unknown library
#import "ASParsingLeafNode.h"


@interface NSNumber (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x32183c41
+ (BOOL)expectsContent;	// 0x32183e85
+ (BOOL)frontingBasicTypes;	// 0x32183d3d
+ (BOOL)notifyOfUnknownTokens;	// 0x32183d91
+ (BOOL)parsingLeafNode;	// 0x32183c95
+ (BOOL)parsingWithSubItems;	// 0x32183ce9
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x32183de5
- (int)parsingState;	// 0x32183e81
@end

