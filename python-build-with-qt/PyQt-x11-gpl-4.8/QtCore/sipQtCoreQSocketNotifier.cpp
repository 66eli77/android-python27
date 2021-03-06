/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsocketnotifier.sip"
#include <qsocketnotifier.h>
#line 39 "sipQtCoreQSocketNotifier.cpp"

#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtCoreQSocketNotifier.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 46 "sipQtCoreQSocketNotifier.cpp"
#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtCoreQSocketNotifier.cpp"
#line 303 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtCoreQSocketNotifier.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 55 "sipQtCoreQSocketNotifier.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 58 "sipQtCoreQSocketNotifier.cpp"
#line 42 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 61 "sipQtCoreQSocketNotifier.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 64 "sipQtCoreQSocketNotifier.cpp"
#line 125 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 67 "sipQtCoreQSocketNotifier.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 70 "sipQtCoreQSocketNotifier.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 73 "sipQtCoreQSocketNotifier.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 76 "sipQtCoreQSocketNotifier.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 79 "sipQtCoreQSocketNotifier.cpp"


class sipQSocketNotifier : public QSocketNotifier
{
public:
    sipQSocketNotifier(int,QSocketNotifier::Type,QObject *);
    virtual ~sipQSocketNotifier();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject * sipProtect_sender() const;
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);
    bool sipProtectVirt_event(bool,QEvent *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSocketNotifier(const sipQSocketNotifier &);
    sipQSocketNotifier &operator = (const sipQSocketNotifier &);

    char sipPyMethods[7];
};

sipQSocketNotifier::sipQSocketNotifier(int a0,QSocketNotifier::Type a1,QObject *a2): QSocketNotifier(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSocketNotifier::~sipQSocketNotifier()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSocketNotifier::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QSocketNotifier);
}

int sipQSocketNotifier::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QSocketNotifier::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QSocketNotifier,_c,_id,_a);

    return _id;
}

void *sipQSocketNotifier::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast && sip_QtCore_qt_metacast(sipPySelf,sipType_QSocketNotifier,_clname)) ? this : QSocketNotifier::qt_metacast(_clname);
}

bool sipQSocketNotifier::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QSocketNotifier::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t,PyObject *,QEvent *);

    return sipVH_QtCore_5(sipGILState,meth,a0);
}

bool sipQSocketNotifier::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return sipVH_QtCore_18(sipGILState,meth,a0,a1);
}

void sipQSocketNotifier::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t,PyObject *,QTimerEvent *);

    sipVH_QtCore_9(sipGILState,meth,a0);
}

void sipQSocketNotifier::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t,PyObject *,QChildEvent *);

    sipVH_QtCore_25(sipGILState,meth,a0);
}

void sipQSocketNotifier::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t,PyObject *,QEvent *);

    sipVH_QtCore_17(sipGILState,meth,a0);
}

void sipQSocketNotifier::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t,PyObject *,const char *);

    sipVH_QtCore_24(sipGILState,meth,a0);
}

void sipQSocketNotifier::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t,PyObject *,const char *);

    sipVH_QtCore_24(sipGILState,meth,a0);
}

QObject * sipQSocketNotifier::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQSocketNotifier::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQSocketNotifier::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQSocketNotifier::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQSocketNotifier::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQSocketNotifier::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQSocketNotifier::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

bool sipQSocketNotifier::sipProtectVirt_event(bool sipSelfWasArg,QEvent *a0)
{
    return (sipSelfWasArg ? QSocketNotifier::event(a0) : event(a0));
}


extern "C" {static PyObject *meth_QSocketNotifier_sender(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        sipQSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSocketNotifier, &sipCpp))
        {
            QObject *sipRes = 0;

#line 529 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        typedef QObject *(*helper_func)(QObject *);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_sender");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp->sender());
        #else
            sipRes = helper(sipCpp->sipProtect_sender());
        #endif
#line 345 "sipQtCoreQSocketNotifier.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_sender, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_receivers(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        char * a0;
        sipQSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QSocketNotifier, &sipCpp, &a0))
        {
            int sipRes = 0;

#line 546 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        if (helper)
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = helper(sipCpp, a0, sipCpp->receivers(a0));
        #else
            sipRes = helper(sipCpp, a0, sipCpp->sipProtect_receivers(a0));
        #endif
#line 387 "sipQtCoreQSocketNotifier.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_receivers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSocketNotifier, &sipCpp, sipType_QTimerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_timerEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSocketNotifier, &sipCpp, sipType_QChildEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_childEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSocketNotifier, &sipCpp, sipType_QEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_customEvent, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QSocketNotifier, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_connectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BG", &sipSelf, sipType_QSocketNotifier, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_disconnectNotify, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_socket(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_socket(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSocketNotifier, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->socket();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_socket, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_type(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSocketNotifier, &sipCpp))
        {
            QSocketNotifier::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSocketNotifier_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_type, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_isEnabled(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_isEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSocketNotifier, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEnabled();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_isEnabled, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_setEnabled(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_setEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSocketNotifier, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setEnabled(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_setEnabled, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSocketNotifier_event(PyObject *, PyObject *);}
static PyObject *meth_QSocketNotifier_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQSocketNotifier *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSocketNotifier, &sipCpp, sipType_QEvent, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_event(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSocketNotifier, sipName_event, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSocketNotifier(void *, const sipTypeDef *);}
static void *cast_QSocketNotifier(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSocketNotifier)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QSocketNotifier *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSocketNotifier(void *, int);}
static void release_QSocketNotifier(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSocketNotifier *>(sipCppV);
    else
        delete reinterpret_cast<QSocketNotifier *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSocketNotifier(sipSimpleWrapper *);}
static void dealloc_QSocketNotifier(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSocketNotifier *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSocketNotifier(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QSocketNotifier(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSocketNotifier(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSocketNotifier *sipCpp = 0;

    {
        int a0;
        QSocketNotifier::Type a1;
        QObject * a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_type,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iE|JH", &a0, sipType_QSocketNotifier_Type, &a1, sipType_QObject, &a2, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSocketNotifier(a0,a1,a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSocketNotifier[] = {{133, 255, 1}};


static PyMethodDef methods_QSocketNotifier[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QSocketNotifier_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QSocketNotifier_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QSocketNotifier_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QSocketNotifier_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_event), meth_QSocketNotifier_event, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEnabled), meth_QSocketNotifier_isEnabled, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QSocketNotifier_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), meth_QSocketNotifier_sender, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setEnabled), meth_QSocketNotifier_setEnabled, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_socket), meth_QSocketNotifier_socket, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QSocketNotifier_timerEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_type), meth_QSocketNotifier_type, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QSocketNotifier[] = {
    {sipName_Exception, QSocketNotifier::Exception, 178},
    {sipName_Read, QSocketNotifier::Read, 178},
    {sipName_Write, QSocketNotifier::Write, 178},
};


/* Define this type's PyQt4 signals. */
static const pyqt4QtSignal pyqt4_signals_QSocketNotifier[] = {
    {"activated(int)", 0, 0},
    {0, 0, 0}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QSocketNotifier = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSocketNotifier,
        {0}
    },
    {
        sipNameNr_QSocketNotifier,
        {0, 0, 1},
        12, methods_QSocketNotifier,
        3, enummembers_QSocketNotifier,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QSocketNotifier,
    0,
    init_QSocketNotifier,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QSocketNotifier,
    0,
    0,
    0,
    release_QSocketNotifier,
    cast_QSocketNotifier,
    0,
    0,
    0
},
    &QSocketNotifier::staticMetaObject,
    0,
    pyqt4_signals_QSocketNotifier
};
