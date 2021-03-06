// Copyright 2007-2016 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniInspector/OIInspector.h>

#import <AppKit/NSNibDeclarations.h> // For IBOutlet and IBAction

@class OIInspectorSection;

@interface OISectionedInspector : OIInspector <OIConcreteInspector> 
{
    NSView *inspectionView;
    
    NSArray <OIInspectorSection <OIConcreteInspector> *> *_sectionInspectors;
}

@end
