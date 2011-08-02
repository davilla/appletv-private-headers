/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface ASParseRule : NSObject {
	int _minimumNumber;	// 4 = 0x4
	int _maximumNumber;	// 8 = 0x8
	int _codePage;	// 12 = 0xc
	int _token;	// 16 = 0x10
	Class _objectClass;	// 20 = 0x14
	SEL _setterMethod;	// 24 = 0x18
	int _dataclass;	// 28 = 0x1c
	NSDictionary *_subclassRuleSet;	// 32 = 0x20
	NSDictionary *_callbackDict;	// 36 = 0x24
	NSDictionary *_streamCallbackDict;	// 40 = 0x28
}
@property(readonly, retain) NSDictionary *callbackDict;	// G=0x34381851; converted property
@property(readonly, assign) int codePage;	// G=0x343817c1; converted property
@property(readonly, assign) int dataclass;	// G=0x34381801; converted property
@property(readonly, assign) int maximumNumber;	// G=0x343817b1; converted property
@property(readonly, assign) int minimumNumber;	// G=0x343817a1; converted property
@property(readonly, assign) Class objectClass;	// G=0x343817e1; converted property
@property(readonly, assign) SEL setterMethod;	// G=0x343817f1; converted property
@property(readonly, retain) NSDictionary *streamCallbackDict;	// G=0x34381811; converted property
@property(readonly, retain) NSDictionary *subclassRuleSet;	// G=0x34381821; converted property
@property(readonly, assign) int token;	// G=0x343817d1; converted property
- (id)initWithMinimumNumber:(int)minimumNumber maximumNumber:(int)number codePage:(int)page token:(int)token objectClass:(Class)aClass setterMethod:(SEL)method dataclass:(int)dataclass callbackDict:(id)dict streamCallbackDict:(id)dict9 subclassRuleSet:(id)set;	// 0x343818ed
// converted property getter: - (id)callbackDict;	// 0x34381851
// converted property getter: - (int)codePage;	// 0x343817c1
// converted property getter: - (int)dataclass;	// 0x34381801
- (void)dealloc;	// 0x34381881
// converted property getter: - (int)maximumNumber;	// 0x343817b1
// converted property getter: - (int)minimumNumber;	// 0x343817a1
// converted property getter: - (Class)objectClass;	// 0x343817e1
// converted property getter: - (SEL)setterMethod;	// 0x343817f1
// converted property getter: - (id)streamCallbackDict;	// 0x34381811
// converted property getter: - (id)subclassRuleSet;	// 0x34381821
// converted property getter: - (int)token;	// 0x343817d1
@end

