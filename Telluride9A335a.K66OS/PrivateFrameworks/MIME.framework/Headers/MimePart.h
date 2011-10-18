/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"

@class NSData, NSMutableDictionary, NSString, MFWeakReferenceHolder, MFPartialNetworkData;

@interface MimePart : NSObject {
	NSString *_type;	// 4 = 0x4
	NSString *_subtype;	// 8 = 0x8
	NSMutableDictionary *_bodyParameters;	// 12 = 0xc
	NSString *_contentTransferEncoding;	// 16 = 0x10
	NSMutableDictionary *_otherIvars;	// 20 = 0x14
	NSRange _range;	// 24 = 0x18
	MFWeakReferenceHolder *_parent;	// 32 = 0x20
	MFWeakReferenceHolder *_body;	// 36 = 0x24
	MimePart *_nextPart;	// 40 = 0x28
	MFPartialNetworkData *_partialData;	// 44 = 0x2c
	NSData *_fullData;	// 48 = 0x30
	MFWeakReferenceHolder *_decodedData;	// 52 = 0x34
}
@property(retain) id contentDescription;	// G=0x32fbc039; S=0x32fbeb95; converted property
@property(retain) id contentID;	// G=0x32fbc069; S=0x32fbebbd; converted property
@property(retain) id contentLocation;	// G=0x32fbc099; S=0x32fbebe5; converted property
@property(retain) NSString *contentTransferEncoding;	// G=0x32fbba25; S=0x32fc1055; converted property
@property(retain) id disposition;	// G=0x32fbbf0d; S=0x32fc101d; converted property
@property(retain) id languages;	// G=0x32fbc0c9; S=0x32fbec0d; converted property
@property(retain) id mimeBody;	// G=0x32fbc319; S=0x32fbc3d9; converted property
@property(assign) NSRange range;	// G=0x32fbba91; S=0x32fbbaad; converted property
@property(retain) id subparts;	// G=0x32fbc1b5; S=0x32fbec35; converted property
@property(retain) NSString *subtype;	// G=0x32fbbdf5; S=0x32fc10d5; converted property
@property(retain) NSString *type;	// G=0x32fbba05; S=0x32fc10f1; converted property
+ (Class)attachmentClass;	// 0x32fbe44d
+ (void)initialize;	// 0x32fbf2b9
+ (BOOL)isRecognizedClassForContent:(id)content;	// 0x32fbe469
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype;	// 0x32fbe429
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype info:(id *)info;	// 0x32fbf169
- (id)init;	// 0x32fc110d
- (void)_contents:(id *)contents toOffset:(unsigned)offset resultOffset:(unsigned *)offset3 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x32fc2325
- (void)_ensureBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete decoded:(id *)decoded;	// 0x32fbfba1
- (id)_fullMimeTypeEvenInsideAppleDouble;	// 0x32fbe555
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned)offset;	// 0x32fc0491
- (id)_partThatIsAttachment;	// 0x32fbcf39
- (void)_setDecryptedMessageBody:(id)body isEncrypted:(BOOL)encrypted isSigned:(BOOL)aSigned;	// 0x32fbeef1
- (void)_setRFC822DecodedMessageBody:(id)body;	// 0x32fbeed1
- (BOOL)_shouldContinueDecodingProcess;	// 0x32fbbac5
- (void)addSubpart:(id)subpart;	// 0x32fbed95
- (id)alternativeAtIndex:(int)index;	// 0x32fbd791
- (unsigned)approximateRawSize;	// 0x32fbce7d
- (id)attachmentFilename;	// 0x32fc0bd9
- (id)attachments;	// 0x32fbe275
- (id)bodyData;	// 0x32fbe985
- (id)bodyDataForcingDownload:(BOOL)download;	// 0x32fbfb65
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x32fbe951
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x32fbde29
- (id)bodyParameterForKey:(id)key;	// 0x32fbbe85
- (id)bodyParameterKeys;	// 0x32fbbec9
- (id)chosenAlternativePart;	// 0x32fbe2d1
- (void)clearCachedDescryptedMessageBody;	// 0x32fc076d
- (void)configureFileWrapper:(id)wrapper;	// 0x32fc05a1
// converted property getter: - (id)contentDescription;	// 0x32fbc039
// converted property getter: - (id)contentID;	// 0x32fbc069
// converted property getter: - (id)contentLocation;	// 0x32fbc099
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x32fbdeed
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x32fbdf15
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x32fbf50d
// converted property getter: - (id)contentTransferEncoding;	// 0x32fbba25
- (id)contentsForTextSystem;	// 0x32fbe93d
- (id)contentsForTextSystemForcingDownload:(BOOL)textSystemForcingDownload;	// 0x32fbe919
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x32fbe8f5
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x32fbe8d1
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x32fbe8a5
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x32fbe821
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x32fbdde1
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x32fbde05
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete;	// 0x32fbdd9d
- (void)dealloc;	// 0x32fbf049
- (id)decodeApplicationOctet_stream;	// 0x32fce6a9
- (id)decodeApplicationZip;	// 0x32fce6a5
- (void)decodeIfNecessary;	// 0x32fbe999
- (id)decodeMultipart;	// 0x32fce6fd
- (id)decodeMultipartAlternative;	// 0x32fce6d5
- (id)decodeMultipartRelated;	// 0x32fce6ad
- (id)decodeText;	// 0x32fc2ca1
- (id)decodedDataForData:(id)data;	// 0x32fc0e29
- (id)decryptedMessageBodyIsEncrypted:(BOOL *)encrypted isSigned:(BOOL *)aSigned;	// 0x32fbda79
- (id)description;	// 0x32fbcb81
// converted property getter: - (id)disposition;	// 0x32fbbf0d
- (id)dispositionParameterForKey:(id)key;	// 0x32fbbf3d
- (id)dispositionParameterKeys;	// 0x32fbbff9
- (void)download;	// 0x32fbdc19
- (id)fileWrapper;	// 0x32fbdd89
- (id)fileWrapperForDecodedObject:(id)decodedObject withFileData:(id *)fileData;	// 0x32fbdb29
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x32fbdc45
- (id)firstChildPart;	// 0x32fbba35
- (void)getNumberOfAttachments:(unsigned *)attachments isSigned:(BOOL *)aSigned isEncrypted:(BOOL *)encrypted;	// 0x32fbe1dd
- (BOOL)hasContents;	// 0x32fbe859
- (BOOL)isAttachment;	// 0x32fbd021
- (BOOL)isHTML;	// 0x32fbd339
- (BOOL)isReadableText;	// 0x32fbce81
- (BOOL)isRich;	// 0x32fbd1f5
// converted property getter: - (id)languages;	// 0x32fbc0c9
// converted property getter: - (id)mimeBody;	// 0x32fbc319
- (id)nextSiblingPart;	// 0x32fbc131
- (int)numberOfAlternatives;	// 0x32fbd639
- (unsigned)numberOfAttachments;	// 0x32fbdf41
- (id)parentPart;	// 0x32fbc0f9
- (BOOL)parseIMAPPropertyList:(id)list;	// 0x32fc2f45
- (BOOL)parseMimeBody;	// 0x32fc4611
- (id)partNumber;	// 0x32fc211d
- (id)preservedHeaderValueForKey:(id)key;	// 0x32fbbee9
// converted property getter: - (NSRange)range;	// 0x32fbba91
- (id)rfc822DecodedMessageBody;	// 0x32fbd4c5
- (void)setBodyParameter:(id)parameter forKey:(id)key;	// 0x32fc1071
// converted property setter: - (void)setContentDescription:(id)description;	// 0x32fbeb95
// converted property setter: - (void)setContentID:(id)anId;	// 0x32fbebbd
// converted property setter: - (void)setContentLocation:(id)location;	// 0x32fbebe5
// converted property setter: - (void)setContentTransferEncoding:(id)encoding;	// 0x32fc1055
// converted property setter: - (void)setDisposition:(id)disposition;	// 0x32fc101d
- (void)setDispositionParameter:(id)parameter forKey:(id)key;	// 0x32fc0f91
// converted property setter: - (void)setLanguages:(id)languages;	// 0x32fbec0d
// converted property setter: - (void)setMimeBody:(id)body;	// 0x32fbc3d9
// converted property setter: - (void)setRange:(NSRange)range;	// 0x32fbbaad
// converted property setter: - (void)setSubparts:(id)subparts;	// 0x32fbec35
// converted property setter: - (void)setSubtype:(id)subtype;	// 0x32fc10d5
// converted property setter: - (void)setType:(id)type;	// 0x32fc10f1
- (BOOL)shouldConsiderInlineOverridingExchangeServer;	// 0x32fc0a61
- (id)signedData;	// 0x32fbd961
- (id)startPart;	// 0x32fbd4ed
- (void)storeData:(id)data inMessage:(id)message isComplete:(BOOL)complete;	// 0x32fbbac1
- (id)subpartAtIndex:(int)index;	// 0x32fbc271
// converted property getter: - (id)subparts;	// 0x32fbc1b5
// converted property getter: - (id)subtype;	// 0x32fbbdf5
- (unsigned long)textEncoding;	// 0x32fc0b99
- (id)textHtmlPart;	// 0x32fbd9b9
- (unsigned)totalTextSize;	// 0x32fc07fd
// converted property getter: - (id)type;	// 0x32fbba05
- (BOOL)usesKnownSignatureProtocol;	// 0x32fc0961
@end

