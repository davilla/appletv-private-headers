/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDText, WDDocument, WDAContent;

__attribute__((visibility("hidden")))
@interface WDATextBox : NSObject {
@private
	WDText *mText;	// 4 = 0x4
	unsigned mNextTextBoxId;	// 8 = 0x8
	bool mOle;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDAContent *mParent;	// 20 = 0x14
}
@property(retain) id document;	// G=0x344b5e31; S=0x344ad4c5; converted property
@property(assign) unsigned long nextTextBoxId;	// G=0x344b9329; S=0x344ad519; converted property
@property(assign, getter=isOle) BOOL ole;	// G=0x344b6121; S=0x344ad489; converted property
@property(retain) id parent;	// G=0x344b5df1; S=0x344ad4a5; converted property
@property(retain) id text;	// G=0x344b5e21; S=0x344b5e41; converted property
- (id)init;	// 0x344ad41d
- (void)dealloc;	// 0x344bc169
// converted property getter: - (id)document;	// 0x344b5e31
// converted property getter: - (BOOL)isOle;	// 0x344b6121
// converted property getter: - (unsigned long)nextTextBoxId;	// 0x344b9329
// converted property getter: - (id)parent;	// 0x344b5df1
// converted property setter: - (void)setDocument:(id)document;	// 0x344ad4c5
// converted property setter: - (void)setNextTextBoxId:(unsigned long)anId;	// 0x344ad519
// converted property setter: - (void)setOle:(BOOL)ole;	// 0x344ad489
// converted property setter: - (void)setParent:(id)parent;	// 0x344ad4a5
// converted property setter: - (void)setText:(id)text;	// 0x344b5e41
// converted property getter: - (id)text;	// 0x344b5e21
@end

