/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CalDAVChecksumLocalDBInfoProvider>, CoreDAVItemParserMapping, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup {
    CoreDAVItemParserMapping *_bestServerChecksumVersion;
    NSDictionary *_localURLsToChecksums;
    BOOL _mismatchDetected;
    NSArray *_preferredChecksumVersions;
    NSMutableDictionary *_serverURLsToChecksums;
    NSString *_unusedCTag;
    NSString *_unusedSyncToken;
}

@property(retain) CoreDAVItemParserMapping * bestServerChecksumVersion;
@property <CalDAVChecksumLocalDBInfoProvider> * delegate;
@property(readonly) BOOL mismatchDetected;
@property(retain) NSArray * preferredChecksumVersions;

- (id)_calculatedCalendarHome;
- (BOOL)_hadOutOfDateCollectionToken;
- (void)_handleResponseToChecksumPropfind:(id)arg1;
- (void)_serverChecksumSupportPropfind;
- (id)bestServerChecksumVersion;
- (id)copyAdditionalResourcePropertiesToFetch;
- (void)dealloc;
- (void)deleteResourceURLs:(id)arg1;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;
- (BOOL)mismatchDetected;
- (id)preferredChecksumVersions;
- (void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2;
- (void)setBestServerChecksumVersion:(id)arg1;
- (void)setPreferredChecksumVersions:(id)arg1;
- (BOOL)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3;
- (void)startTaskGroup;

@end
