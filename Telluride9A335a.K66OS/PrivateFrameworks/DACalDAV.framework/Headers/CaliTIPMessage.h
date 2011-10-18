/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSData, CalDAVScheduleChangesProperty, ICSDocument, ICSEvent;

@interface CaliTIPMessage : NSObject {
	NSData *_data;	// 4 = 0x4
	CalDAVScheduleChangesProperty *_scheduleChanges;	// 8 = 0x8
	NSString *_filename;	// 12 = 0xc
	ICSDocument *_document;	// 16 = 0x10
	ICSEvent *_event;	// 20 = 0x14
}
@property(readonly, retain) NSData *data;	// G=0x34cf0be5; converted property
@property(readonly, retain) ICSDocument *document;	// G=0x34cf0c15; converted property
@property(readonly, retain) ICSEvent *event;	// G=0x34cf0ca1; converted property
@property(readonly, retain) NSString *filename;	// G=0x34cf0c05; converted property
@property(readonly, retain) CalDAVScheduleChangesProperty *scheduleChanges;	// G=0x34cf0bf5; converted property
- (id)initWithData:(id)data filename:(id)filename;	// 0x34cf0b31
- (id)initWithData:(id)data filename:(id)filename scheduleChanges:(id)changes;	// 0x34cf0b55
- (id)allOccurrences;	// 0x34cf101d
- (id)calendar;	// 0x34cf0c79
- (int)compare:(id)compare;	// 0x34cf1145
// converted property getter: - (id)data;	// 0x34cf0be5
- (void)dealloc;	// 0x34cf131d
- (id)description;	// 0x34cf1205
// converted property getter: - (id)document;	// 0x34cf0c15
// converted property getter: - (id)event;	// 0x34cf0ca1
// converted property getter: - (id)filename;	// 0x34cf0c05
- (id)masterEvent;	// 0x34cf0fe1
- (id)occurrences;	// 0x34cf10d1
// converted property getter: - (id)scheduleChanges;	// 0x34cf0bf5
@end

