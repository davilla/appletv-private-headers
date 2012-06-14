/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ABFavoritesEntry : NSObject {
@private
	int _abUid;	// 4 = 0x4
	int _abIdentifier;	// 8 = 0x8
	NSString *_value;	// 12 = 0xc
	int _property;	// 16 = 0x10
	int _type;	// 20 = 0x14
	unsigned _dirty : 1;	// 24 = 0x18
	NSString *_label;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSString *_abDatabaseUUID;	// 36 = 0x24
	void *_addressBook;	// 40 = 0x28
}
@property(readonly, retain) NSString *label;	// G=0x30a0ed25; converted property
@property(readonly, assign) int property;	// G=0x30a0ed15; converted property
@property(readonly, assign) int type;	// G=0x30a0ed9d; converted property
@property(readonly, retain) NSString *value;	// G=0x30a0ed7d; converted property
+ (void)_runLookup;	// 0x30a0eead
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x30a0e805
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation addressBook:(void *)book;	// 0x30a0e819
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x30a0e671
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier type:(int)type;	// 0x30a0e695
- (void *)ABPerson;	// 0x30a0edad
- (int)_abUid;	// 0x30a0edd9
- (void)_lookupChanged:(id)changed;	// 0x30a0f935
- (void)_lookupNotFound;	// 0x30a0f85d
- (void)_postEntryChanged;	// 0x30a0f815
- (void)_queueLookup;	// 0x30a0f6c9
- (void)_unqueueLookup;	// 0x30a0f7b5
- (void)dealloc;	// 0x30a0ea45
- (id)dictionaryRepresentation;	// 0x30a0eaf9
- (void)dictionaryRepresentation:(id *)representation isDirty:(BOOL *)dirty;	// 0x30a0eca1
- (id)displayName;	// 0x30a0ecdd
- (int)identifier;	// 0x30a0ed8d
- (BOOL)isEqual:(id)equal;	// 0x30a0ede9
// converted property getter: - (id)label;	// 0x30a0ed25
- (id)nonLocalizedLabel;	// 0x30a0ed6d
// converted property getter: - (int)property;	// 0x30a0ed15
- (void)recheckAddressBook;	// 0x30a0ee9d
// converted property getter: - (int)type;	// 0x30a0ed9d
// converted property getter: - (id)value;	// 0x30a0ed7d
@end
