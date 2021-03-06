/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABVCardPersonValueSetter.h"


@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {
@private
	void *_store;	// 12 = 0xc
	BOOL _recordIsGroup;	// 16 = 0x10
	BOOL _importingToExistingGroup;	// 17 = 0x11
}
+ (CFDictionaryRef)_personToGroupPropertyMap;	// 0x304fa4d9
+ (int)groupPropertyForPersonProperty:(int)personProperty;	// 0x304fa579
- (id)initWithGroup:(void *)group removeExistingProperties:(BOOL)properties;	// 0x304f77f5
- (id)initWithPerson:(void *)person removeExistingProperties:(BOOL)properties;	// 0x304f7845
- (void)_drainExistingProperties;	// 0x304fa351
- (void *)copyParsedRecordWithSource:(void *)source outRecordType:(unsigned *)type;	// 0x304fa251
- (BOOL)propertyIsValidForPerson:(unsigned)person;	// 0x304f5439
- (BOOL)setImageData:(id)data;	// 0x304fa459
- (void)setRecordIsGroup:(BOOL)group;	// 0x304f5429
- (BOOL)setValue:(void *)value forProperty:(unsigned)property;	// 0x304fa0e9
@end

