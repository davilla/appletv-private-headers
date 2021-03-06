/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSCompoundPredicate.h> // Unknown library


@interface NSCompoundPredicate (ABPredicateQueryCreation)
- (void)ab_addCallbackContextToArray:(CFArrayRef)array;	// 0x32bf754d
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x32bf7615
- (BOOL)ab_hasCallback;	// 0x32bf74d9
- (id)ab_newQueryWithSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x32bf76f5
@end

