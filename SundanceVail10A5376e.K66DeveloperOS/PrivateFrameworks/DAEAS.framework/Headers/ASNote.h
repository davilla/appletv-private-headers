/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASChangedCollectionLeaf.h"
#import "DADataElement.h"

@class NSDate, NSArray, NSNumber, NSString, NoteObject;

@interface ASNote : ASChangedCollectionLeaf <DADataElement> {
	NoteObject *_localRecord;	// 64 = 0x40
	NSString *_body;	// 68 = 0x44
	NSNumber *_bodyTruncated;	// 72 = 0x48
	BOOL _bodyIsPlaintext;	// 76 = 0x4c
	NSArray *_categories;	// 80 = 0x50
	NSString *_subject;	// 84 = 0x54
	NSString *_messageClass;	// 88 = 0x58
	NSDate *_lastModifiedDate;	// 92 = 0x5c
}
@property(retain, nonatomic) NSString *body;	// G=0x322cbc71; S=0x322cbc81; @synthesize=_body
@property(assign) BOOL bodyIsPlaintext;	// G=0x322cbcb5; S=0x322cbccd; @synthesize=_bodyIsPlaintext
@property(retain) NSNumber *bodyTruncated;	// G=0x322cbc91; S=0x322cbca5; @synthesize=_bodyTruncated
@property(retain) NSArray *categories;	// G=0x322cbce5; S=0x322cbcf9; @synthesize=_categories
@property(retain) NSDate *lastModifiedDate;	// G=0x322cbd51; S=0x322cbd65; @synthesize=_lastModifiedDate
@property(retain) NoteObject *localRecord;	// G=0x322cbd75; S=0x322cbd89; @synthesize=_localRecord
@property(retain) NSString *messageClass;	// G=0x322cbd2d; S=0x322cbd41; @synthesize=_messageClass
@property(retain) NSString *subject;	// G=0x322cbd09; S=0x322cbd1d; @synthesize=_subject
+ (BOOL)acceptsTopLevelLeaves;	// 0x322ca361
+ (id)asParseRules;	// 0x322ca505
+ (BOOL)frontingBasicTypes;	// 0x322ca45d
+ (id)noteWithLocalNoteObject:(id)localNoteObject serverID:(id)anId account:(id)account;	// 0x322cab3d
+ (BOOL)notifyOfUnknownTokens;	// 0x322ca4b1
+ (BOOL)parsingLeafNode;	// 0x322ca3b5
+ (BOOL)parsingWithSubItems;	// 0x322ca409
- (id)initWithCoder:(id)coder;	// 0x322cbb75
- (id)initWithLocalNoteObject:(id)localNoteObject serverID:(id)anId account:(id)account;	// 0x322caabd
- (void)_loadAttributesFromLocalNoteObject:(id)localNoteObject forAccount:(id)account;	// 0x322ca85d
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x322cb5a5
// declared property getter: - (id)body;	// 0x322cbc71
// declared property getter: - (BOOL)bodyIsPlaintext;	// 0x322cbcb5
// declared property getter: - (id)bodyTruncated;	// 0x322cbc91
// declared property getter: - (id)categories;	// 0x322cbce5
- (int)dataclass;	// 0x322ca859
- (void)dealloc;	// 0x322cab85
- (BOOL)deleteFromContainer:(void *)container;	// 0x322cbb5d
- (BOOL)deleteFromNoteContext;	// 0x322cb54d
- (id)description;	// 0x322cac4d
- (void)encodeWithCoder:(id)coder;	// 0x322cbbf5
// declared property getter: - (id)lastModifiedDate;	// 0x322cbd51
- (void)loadClientIDs;	// 0x322cba6d
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x322cbb2d
- (BOOL)loadNoteObjectForAccount:(id)account;	// 0x322cb7f9
// declared property getter: - (id)localRecord;	// 0x322cbd75
// declared property getter: - (id)messageClass;	// 0x322cbd2d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x322cb4b5
- (void)postProcessApplicationData;	// 0x322cb20d
- (BOOL)saveServerIDToExistingItem;	// 0x322cbb45
- (BOOL)saveServerIDToNoteDB;	// 0x322cba35
- (BOOL)saveToNoteDBWithExistingRecord:(id)existingRecord intoNoteStore:(id)store shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x322cacb9
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x322cbae9
// declared property setter: - (void)setBody:(id)body;	// 0x322cbc81
// declared property setter: - (void)setBodyIsPlaintext:(BOOL)plaintext;	// 0x322cbccd
// declared property setter: - (void)setBodyTruncated:(id)truncated;	// 0x322cbca5
// declared property setter: - (void)setCategories:(id)categories;	// 0x322cbcf9
// declared property setter: - (void)setLastModifiedDate:(id)date;	// 0x322cbd65
- (void)setLocalItem:(void *)item;	// 0x322cbb1d
// declared property setter: - (void)setLocalRecord:(id)record;	// 0x322cbd89
// declared property setter: - (void)setMessageClass:(id)aClass;	// 0x322cbd41
// declared property setter: - (void)setSubject:(id)subject;	// 0x322cbd1d
// declared property getter: - (id)subject;	// 0x322cbd09
@end

