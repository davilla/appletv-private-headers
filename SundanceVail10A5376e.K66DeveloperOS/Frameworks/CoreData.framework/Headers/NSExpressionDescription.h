/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyDescription.h"
#import "CoreData-Structs.h"

@class NSExpression;

@interface NSExpressionDescription : NSPropertyDescription {
	id _reservedtype1_1;	// 48 = 0x30
	id _reservedtype1_2;	// 52 = 0x34
	unsigned _reservedtype1_3;	// 56 = 0x38
	id _reservedtype1_4;	// 60 = 0x3c
	unsigned _reservedtype1_5;	// 64 = 0x40
	id _reservedtype1_6;	// 68 = 0x44
	void *_reservedtype2_1;	// 72 = 0x48
	void *_reservedtype2_2;	// 76 = 0x4c
	void *_reservedtype2_3;	// 80 = 0x50
	NSExpression *_expression;	// 84 = 0x54
	unsigned _expressionResultType;	// 88 = 0x58
}
@property(retain) NSExpression *expression;	// G=0x35c27bc9; S=0x35c27bd9; converted property
@property(assign) unsigned expressionResultType;	// G=0x35c27c1d; S=0x35c27c2d; converted property
- (id)init;	// 0x35c27915
- (id)initWithCoder:(id)coder;	// 0x35c27a45
- (unsigned)_propertyType;	// 0x35c27c3d
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots fetchRequests:(id)requests;	// 0x35c27cd1
- (id)copyWithZone:(NSZone *)zone;	// 0x35c27b65
- (void)dealloc;	// 0x35c279f5
- (void)encodeWithCoder:(id)coder;	// 0x35c27ae1
// converted property getter: - (id)expression;	// 0x35c27bc9
// converted property getter: - (unsigned)expressionResultType;	// 0x35c27c1d
// converted property setter: - (void)setExpression:(id)expression;	// 0x35c27bd9
// converted property setter: - (void)setExpressionResultType:(unsigned)type;	// 0x35c27c2d
@end
