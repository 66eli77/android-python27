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

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qtextboundaryfinder.sip"
#include <qtextboundaryfinder.h>
#line 39 "sipQtCoreQTextBoundaryFinder.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtCoreQTextBoundaryFinder.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qtextboundaryfinder.sip"
#include <qtextboundaryfinder.h>
#line 46 "sipQtCoreQTextBoundaryFinder.cpp"


extern "C" {static PyObject *meth_QTextBoundaryFinder_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBoundaryFinder_type(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            QTextBoundaryFinder::BoundaryType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QTextBoundaryFinder_BoundaryType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_type, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBoundaryFinder_string(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_string(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->string());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_string, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBoundaryFinder_toStart(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_toStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->toStart();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_toStart, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBoundaryFinder_toEnd(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_toEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->toEnd();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_toEnd, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBoundaryFinder_position(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->position();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_position, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBoundaryFinder_setPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_setPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPosition(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_setPosition, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBoundaryFinder_toNextBoundary(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_toNextBoundary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->toNextBoundary();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_toNextBoundary, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBoundaryFinder_toPreviousBoundary(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_toPreviousBoundary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->toPreviousBoundary();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_toPreviousBoundary, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBoundaryFinder_isAtBoundary(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_isAtBoundary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAtBoundary();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_isAtBoundary, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QTextBoundaryFinder_boundaryReasons(PyObject *, PyObject *);}
static PyObject *meth_QTextBoundaryFinder_boundaryReasons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBoundaryFinder, &sipCpp))
        {
            QTextBoundaryFinder::BoundaryReasons *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBoundaryFinder::BoundaryReasons(sipCpp->boundaryReasons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBoundaryFinder, sipName_boundaryReasons, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextBoundaryFinder(void *, const sipTypeDef *);}
static void *cast_QTextBoundaryFinder(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextBoundaryFinder)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextBoundaryFinder(void *, int);}
static void release_QTextBoundaryFinder(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextBoundaryFinder *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextBoundaryFinder(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextBoundaryFinder(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextBoundaryFinder *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextBoundaryFinder *>(sipSrc);
}


extern "C" {static void *array_QTextBoundaryFinder(SIP_SSIZE_T);}
static void *array_QTextBoundaryFinder(SIP_SSIZE_T sipNrElem)
{
    return new QTextBoundaryFinder[sipNrElem];
}


extern "C" {static void *copy_QTextBoundaryFinder(const void *, SIP_SSIZE_T);}
static void *copy_QTextBoundaryFinder(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextBoundaryFinder(reinterpret_cast<const QTextBoundaryFinder *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextBoundaryFinder(sipSimpleWrapper *);}
static void dealloc_QTextBoundaryFinder(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextBoundaryFinder(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QTextBoundaryFinder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTextBoundaryFinder(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextBoundaryFinder *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextBoundaryFinder();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextBoundaryFinder * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextBoundaryFinder, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextBoundaryFinder(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QTextBoundaryFinder::BoundaryType a0;
        const QString * a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ1", sipType_QTextBoundaryFinder_BoundaryType, &a0, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextBoundaryFinder(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextBoundaryFinder[] = {
    {SIP_MLNAME_CAST(sipName_boundaryReasons), meth_QTextBoundaryFinder_boundaryReasons, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isAtBoundary), meth_QTextBoundaryFinder_isAtBoundary, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextBoundaryFinder_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_position), meth_QTextBoundaryFinder_position, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setPosition), meth_QTextBoundaryFinder_setPosition, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_string), meth_QTextBoundaryFinder_string, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toEnd), meth_QTextBoundaryFinder_toEnd, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toNextBoundary), meth_QTextBoundaryFinder_toNextBoundary, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toPreviousBoundary), meth_QTextBoundaryFinder_toPreviousBoundary, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toStart), meth_QTextBoundaryFinder_toStart, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_type), meth_QTextBoundaryFinder_type, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QTextBoundaryFinder[] = {
    {sipName_EndWord, QTextBoundaryFinder::EndWord, 205},
    {sipName_Grapheme, QTextBoundaryFinder::Grapheme, 207},
    {sipName_Line, QTextBoundaryFinder::Line, 207},
    {sipName_NotAtBoundary, QTextBoundaryFinder::NotAtBoundary, 205},
    {sipName_Sentence, QTextBoundaryFinder::Sentence, 207},
    {sipName_StartWord, QTextBoundaryFinder::StartWord, 205},
    {sipName_Word, QTextBoundaryFinder::Word, 207},
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QTextBoundaryFinder = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextBoundaryFinder,
        {0}
    },
    {
        sipNameNr_QTextBoundaryFinder,
        {0, 0, 1},
        11, methods_QTextBoundaryFinder,
        7, enummembers_QTextBoundaryFinder,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QTextBoundaryFinder,
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
    dealloc_QTextBoundaryFinder,
    assign_QTextBoundaryFinder,
    array_QTextBoundaryFinder,
    copy_QTextBoundaryFinder,
    release_QTextBoundaryFinder,
    cast_QTextBoundaryFinder,
    0,
    0,
    0
},
    0,
    0,
    0
};