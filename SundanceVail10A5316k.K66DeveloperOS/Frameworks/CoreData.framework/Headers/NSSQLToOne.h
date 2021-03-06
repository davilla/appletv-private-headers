/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLRelationship.h"

@class NSSQLForeignEntityKey, NSSQLForeignKey, NSSQLForeignOrderKey;

__attribute__((visibility("hidden")))
@interface NSSQLToOne : NSSQLRelationship {
@private
	NSSQLForeignKey *_foreignKey;	// 32 = 0x20
	NSSQLForeignEntityKey *_foreignEntityKey;	// 36 = 0x24
	NSSQLForeignOrderKey *_foreignOrderKey;	// 40 = 0x28
	unsigned _slot;	// 44 = 0x2c
	BOOL _isVirtual;	// 48 = 0x30
}
@property(readonly, retain) NSSQLForeignEntityKey *foreignEntityKey;	// G=0x32d34199; converted property
@property(readonly, retain) NSSQLForeignKey *foreignKey;	// G=0x32d34189; converted property
@property(readonly, retain) NSSQLForeignOrderKey *foreignOrderKey;	// G=0x32d344fd; converted property
@property(readonly, assign) BOOL isVirtual;	// G=0x32d34755; converted property
@property(readonly, assign) unsigned slot;	// G=0x32de09a5; converted property
- (id)initForReadOnlyFetchWithEntity:(id)entity propertyDescription:(id)description;	// 0x32de06d5
- (id)initWithEntity:(id)entity inverseToMany:(id)many;	// 0x32d3508d
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x32d33ae1
- (id)initWithEntity:(id)entity propertyDescription:(id)description virtualForToMany:(id)many;	// 0x32d33b05
- (void)_setForeignOrderKey:(id)key;	// 0x32de089d
- (id)columnName;	// 0x32de08f1
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x32de09f1
- (void)dealloc;	// 0x32de07ed
- (id)description;	// 0x32de0919
// converted property getter: - (id)foreignEntityKey;	// 0x32d34199
// converted property getter: - (id)foreignKey;	// 0x32d34189
// converted property getter: - (id)foreignOrderKey;	// 0x32d344fd
- (BOOL)isOptional;	// 0x32de09b5
// converted property getter: - (BOOL)isVirtual;	// 0x32d34755
// converted property getter: - (unsigned)slot;	// 0x32de09a5
@end

